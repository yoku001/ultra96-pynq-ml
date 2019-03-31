from sklearn.datasets import load_iris
from sklearn.model_selection import train_test_split
iris = load_iris()
X, y = iris.data, iris.target
X_train, X_test, y_train, y_test = train_test_split(X, y, random_state=0)

from sklearn.ensemble import RandomForestClassifier
clf = RandomForestClassifier(n_estimators=3, random_state=0)
clf.fit(X_train, y_train)

from tools.export import RandomForestParser
parser = RandomForestParser(clf)

with open('randomforest.c', 'w') as f:
    f.write(parser.export())

import pickle
with open('randomforest.pkl', 'wb') as f:
  pickle.dump(clf, f)
