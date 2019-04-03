num_indent = 2


class RandomForestParser:
    """
    Convert a instance of sklearn.ensemble.RandomForestClassifier into C++ sorce code.

    See Also
    --------
    http://scikit-learn.org/stable/modules/generated/sklearn.ensemble.RandomForestClassifier.html
    """

    template_tree = """
int {method_name}(const {input_type} features[]) {{
  int values[{n_classes}];
  {tree_body}

  return argmax({n_classes}, values);
}}"""

    template_method = """
#include <string.h>

#ifdef __SYNTHESIS__
  #include <hls_half.h>
#endif

#define N_FEATURES {n_features}

static inline int argmax(int n_values, const int values[]) {{
  int y_pred = 0;
  int max_val = values[0];
  for (int i = 1; i < n_values; i++) {{
    if (values[i] > max_val) {{
      y_pred = i;
      max_val = values[i];
    }}
  }}
  return y_pred;
}}
{trees}

extern "C" void predict({input_type} features[N_FEATURES], int& output) {{
#ifdef __SYNTHESIS__
  #pragma HLS INTERFACE ap_ctrl_none port=return
  #pragma HLS INTERFACE m_axi depth={n_features} offset=slave port=features
  #pragma HLS INTERFACE s_axilite port=output
  #pragma HLS dataflow
#endif

  {input_type} buffer[N_FEATURES];
  memcpy(buffer, features, sizeof(float) * N_FEATURES);

  int values[{n_classes}] = {{ 0 }};

{count_trees}

  output = argmax({n_classes}, values);
}}
"""

    def __init__(self, estimator, use_half_precision=False):
        self.estimator = estimator

        self.estimators = [estimator.estimators_[i] for i in range(estimator.n_estimators)]
        self.n_estimators = len(self.estimators)
        self.n_features = estimator.estimators_[0].n_features_
        self.n_classes = estimator.n_classes_

        if use_half_precision:
            self.input_type = "half"
            self.float_formatter = lambda x: f"static_cast<half>({x:.8f}f)"
        else:
            self.input_type = "float"
            self.float_formatter = lambda x: f"{x:.8f}f"

        self._tree_method_names = [f"predict_{i}" for i in range(self.n_estimators)]

    def __newline(self, indent):
        return "\n" + " " * indent

    def export(self):
        """
        Parse the estimator and output C++ source code.

        Returns
        -------
        string
            The converted C++ soruce code.
        """

        # Create function names
        functions = []
        for i in range(self.n_estimators):
            fn_name = self._tree_method_names[i]
            fn_name = f"values[{fn_name}(buffer)]++;"
            functions.append(fn_name)
        functions = "\n".join(functions)

        # Parse sub-estimators
        trees = [self.create_decision_tree(i, est) for i, est in enumerate(self.estimators)]
        trees = "\n".join(trees)

        # Merge parsed results
        return self.template_method.format(
            n_features=self.n_features,
            trees=trees,
            input_type=self.input_type,
            count_trees=functions,
            n_estimators=self.n_estimators,
            n_classes=self.n_classes,
        )

    def create_tree_body(self, left_nodes, right_nodes, threshold, value, features, node, indent):
        out = ""
        if threshold[node] != -2.0:
            # Create node of the decision tree
            out += self.__newline(indent)
            cond = self.float_formatter(threshold[node])
            out += f"if (features[{features[node]}] <= {cond}) {{"
            if left_nodes[node] != -1.0:
                # Create a node recursively
                out += self.create_tree_body(
                    left_nodes,
                    right_nodes,
                    threshold,
                    value,
                    features,
                    left_nodes[node],
                    indent + num_indent,
                )
            out += self.__newline(indent)
            out += "} else {"
            if right_nodes[node] != -1.0:
                out += self.create_tree_body(
                    left_nodes,
                    right_nodes,
                    threshold,
                    value,
                    features,
                    right_nodes[node],
                    indent + num_indent,
                )
            out += self.__newline(indent)
            out += "}"
        else:
            # Terminal node
            classes = []
            for i, rate in enumerate(value[node][0]):
                cl = self.__newline(indent)
                cl += f"values[{i}] = {int(rate)}"
                classes.append(cl)
            out += ";".join(classes) + ";"
        return out

    def create_decision_tree(self, estimator_index, estimator):
        """
        Parse a single decision tree estimator.
        """
        indices = [str(e) for e in estimator.tree_.feature]

        tree_body = self.create_tree_body(
            estimator.tree_.children_left,
            estimator.tree_.children_right,
            estimator.tree_.threshold,
            estimator.tree_.value,
            indices,
            0,
            num_indent,
        )

        method_name = self._tree_method_names[estimator_index]
        return self.template_tree.format(
            method_name=method_name,
            input_type=self.input_type,
            n_classes=self.n_classes,
            tree_body=tree_body,
        )
