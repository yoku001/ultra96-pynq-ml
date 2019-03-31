
#ifdef __SYNTHESIS__
  #include <hls_half.h>
#endif

#define N_FEATURES 4

static inline int argmax(int n_values, int values[]) {
  int y_pred = 0;
  int max_val = values[0];
  for (int i = 1; i < n_values; i++) {
    if (values[i] > max_val) {
      y_pred = i;
      max_val = values[i];
    }
  }
  return y_pred;
}

int predict_0(float features[]) {
  int values[3];
  
  if (features[3] <= 0.75f) {
    values[0] = 38;
    values[1] = 0;
    values[2] = 0;
  } else {
    if (features[2] <= 4.8500001f) {
      if (features[3] <= 1.7f) {
        values[0] = 0;
        values[1] = 34;
        values[2] = 0;
      } else {
        if (features[1] <= 3.1f) {
          values[0] = 0;
          values[1] = 0;
          values[2] = 1;
        } else {
          values[0] = 0;
          values[1] = 2;
          values[2] = 0;
        }
      }
    } else {
      if (features[0] <= 6.5999999f) {
        values[0] = 0;
        values[1] = 0;
        values[2] = 24;
      } else {
        if (features[2] <= 5.2f) {
          values[0] = 0;
          values[1] = 2;
          values[2] = 0;
        } else {
          values[0] = 0;
          values[1] = 0;
          values[2] = 11;
        }
      }
    }
  }

  return argmax(3, values);
}

int predict_1(float features[]) {
  int values[3];
  
  if (features[3] <= 0.75f) {
    values[0] = 40;
    values[1] = 0;
    values[2] = 0;
  } else {
    if (features[3] <= 1.75f) {
      if (features[2] <= 4.95f) {
        if (features[2] <= 4.45f) {
          values[0] = 0;
          values[1] = 19;
          values[2] = 0;
        } else {
          if (features[3] <= 1.65f) {
            values[0] = 0;
            values[1] = 13;
            values[2] = 0;
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 1;
          }
        }
      } else {
        if (features[3] <= 1.6f) {
          values[0] = 0;
          values[1] = 0;
          values[2] = 4;
        } else {
          values[0] = 0;
          values[1] = 1;
          values[2] = 0;
        }
      }
    } else {
      if (features[0] <= 5.95f) {
        values[0] = 0;
        values[1] = 1;
        values[2] = 0;
      } else {
        values[0] = 0;
        values[1] = 0;
        values[2] = 33;
      }
    }
  }

  return argmax(3, values);
}

int predict_2(float features[]) {
  int values[3];
  
  if (features[0] <= 5.45f) {
    if (features[3] <= 0.80000001f) {
      values[0] = 38;
      values[1] = 0;
      values[2] = 0;
    } else {
      values[0] = 0;
      values[1] = 2;
      values[2] = 0;
    }
  } else {
    if (features[2] <= 4.95f) {
      if (features[3] <= 0.6f) {
        values[0] = 2;
        values[1] = 0;
        values[2] = 0;
      } else {
        if (features[3] <= 1.7f) {
          values[0] = 0;
          values[1] = 28;
          values[2] = 0;
        } else {
          values[0] = 0;
          values[1] = 0;
          values[2] = 2;
        }
      }
    } else {
      values[0] = 0;
      values[1] = 0;
      values[2] = 40;
    }
  }

  return argmax(3, values);
}

void predict(float features[N_FEATURES], int *output) {
#ifdef __SYNTHESIS__
  #pragma HLS INTERFACE ap_ctrl_none port=return
  #pragma HLS INTERFACE m_axi depth=4 offset=slave port=features
  #pragma HLS INTERFACE s_axilite port=output
#endif

  int values[3] = { 0 };

values[predict_0(features)]++;
values[predict_1(features)]++;
values[predict_2(features)]++;

  *output = argmax(3, values);
}
