from sklearn.ensemble import RandomForestClassifier
from sklearn.datasets import load_digits
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score
from tools.export import RandomForestParser
import pickle


def main():
    digits = load_digits()
    X_train, X_test, y_train, y_test = train_test_split(
        digits["data"], digits["target"], random_state=0
    )

    # train classifier
    print("start training")
    clf = RandomForestClassifier(n_estimators=5, max_depth=5, random_state=0)
    clf.fit(X_train, y_train)
    y_pred = clf.predict(X_test)
    acc = accuracy_score(y_test, y_pred)
    print(f"validation accuracy: {acc}")

    print("export C++ source")
    parser = RandomForestParser(clf, use_half_precision=False)
    with open("randomforest.cc", "w") as f:
        f.write(parser.export())

    # save original model for comparison later
    print("save original model")
    with open("randomforest.pkl", "wb") as f:
        pickle.dump(clf, f)


if __name__ == "__main__":
    main()
