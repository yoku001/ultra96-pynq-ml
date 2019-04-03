from sklearn.datasets import load_digits
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score
import ctypes
import pickle
import numpy as np
import numpy.ctypeslib as clib

digits = load_digits()
X_train, X_test, y_train, y_test = train_test_split(
    digits["data"], digits["target"], random_state=0
)
X_test = X_test.astype(np.float32)

# load original model
with open("./randomforest.pkl", "rb") as f:
    clf = pickle.load(f)

y_expected = clf.predict(X_test)

# load generated library
c_int_p = ctypes.POINTER(ctypes.c_int)
lib = clib.load_library("randomforest.so", ".")
lib.predict.argtypes = [clib.ndpointer(np.float32, ndim=1, flags="C"), c_int_p]


def pred(X, lib):
    output = ctypes.c_int()
    lib.predict(X, output)
    return output.value


y_actual = [pred(X_test[i], lib) for i in range(len(X_test))]

# compare python's result with C++'s one, allow error < 10%
np.testing.assert_almost_equal(
    accuracy_score(y_test, y_expected), accuracy_score(y_test, y_actual), decimal=1
)
