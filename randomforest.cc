
#include <string.h>

#ifdef __SYNTHESIS__
  #include <hls_half.h>
#endif

#define N_FEATURES 64

static inline int argmax(int n_values, const int values[]) {
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

int predict_0(const float features[]) {
  int values[10];
  
  if (features[43] <= 1.50000000f) {
    if (features[41] <= 0.50000000f) {
      if (features[21] <= 1.50000000f) {
        if (features[18] <= 8.50000000f) {
          if (features[61] <= 11.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 3;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            if (features[19] <= 7.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 2;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 2;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        } else {
          if (features[2] <= 5.50000000f) {
            if (features[61] <= 9.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 9;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 1;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 57;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        }
      } else {
        if (features[36] <= 12.50000000f) {
          if (features[42] <= 8.00000000f) {
            if (features[58] <= 13.50000000f) {
              values[0] = 0;
              values[1] = 9;
              values[2] = 1;
              values[3] = 12;
              values[4] = 0;
              values[5] = 9;
              values[6] = 0;
              values[7] = 1;
              values[8] = 0;
              values[9] = 106;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 5;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[25] <= 1.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 3;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 1;
              values[9] = 0;
            } else {
              values[0] = 9;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        } else {
          if (features[2] <= 0.50000000f) {
            if (features[11] <= 15.50000000f) {
              values[0] = 0;
              values[1] = 6;
              values[2] = 0;
              values[3] = 1;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 1;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 1;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 2;
            }
          } else {
            if (features[60] <= 6.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 1;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 2;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 57;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        }
      }
    } else {
      if (features[38] <= 1.50000000f) {
        if (features[34] <= 11.50000000f) {
          if (features[18] <= 2.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 5;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            if (features[51] <= 7.50000000f) {
              values[0] = 3;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 2;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 1;
              values[3] = 0;
              values[4] = 0;
              values[5] = 3;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        } else {
          if (features[21] <= 2.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 1;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 14;
            values[9] = 0;
          }
        }
      } else {
        if (features[28] <= 2.50000000f) {
          values[0] = 84;
          values[1] = 0;
          values[2] = 0;
          values[3] = 0;
          values[4] = 0;
          values[5] = 0;
          values[6] = 0;
          values[7] = 0;
          values[8] = 0;
          values[9] = 0;
        } else {
          if (features[28] <= 6.00000000f) {
            if (features[26] <= 11.50000000f) {
              values[0] = 1;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 6;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[51] <= 1.50000000f) {
              values[0] = 0;
              values[1] = 4;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 5;
              values[4] = 2;
              values[5] = 3;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 4;
            }
          }
        }
      }
    }
  } else {
    if (features[62] <= 0.50000000f) {
      if (features[5] <= 12.50000000f) {
        if (features[33] <= 3.50000000f) {
          if (features[51] <= 13.50000000f) {
            if (features[22] <= 0.50000000f) {
              values[0] = 0;
              values[1] = 7;
              values[2] = 2;
              values[3] = 7;
              values[4] = 5;
              values[5] = 14;
              values[6] = 1;
              values[7] = 7;
              values[8] = 20;
              values[9] = 0;
            } else {
              values[0] = 2;
              values[1] = 0;
              values[2] = 0;
              values[3] = 2;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 7;
              values[8] = 52;
              values[9] = 1;
            }
          } else {
            if (features[58] <= 3.50000000f) {
              values[0] = 2;
              values[1] = 43;
              values[2] = 2;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 3;
              values[7] = 1;
              values[8] = 2;
              values[9] = 0;
            } else {
              values[0] = 1;
              values[1] = 16;
              values[2] = 9;
              values[3] = 0;
              values[4] = 4;
              values[5] = 7;
              values[6] = 0;
              values[7] = 29;
              values[8] = 5;
              values[9] = 1;
            }
          }
        } else {
          if (features[36] <= 0.50000000f) {
            values[0] = 25;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            if (features[37] <= 4.00000000f) {
              values[0] = 0;
              values[1] = 12;
              values[2] = 0;
              values[3] = 0;
              values[4] = 1;
              values[5] = 3;
              values[6] = 4;
              values[7] = 0;
              values[8] = 1;
              values[9] = 0;
            } else {
              values[0] = 2;
              values[1] = 1;
              values[2] = 0;
              values[3] = 0;
              values[4] = 123;
              values[5] = 0;
              values[6] = 8;
              values[7] = 13;
              values[8] = 0;
              values[9] = 0;
            }
          }
        }
      } else {
        if (features[20] <= 0.50000000f) {
          if (features[21] <= 3.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 33;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            if (features[54] <= 1.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 16;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 4;
              values[9] = 0;
            }
          }
        } else {
          if (features[30] <= 0.50000000f) {
            if (features[27] <= 1.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 17;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 1;
              values[2] = 5;
              values[3] = 3;
              values[4] = 1;
              values[5] = 4;
              values[6] = 0;
              values[7] = 2;
              values[8] = 7;
              values[9] = 2;
            }
          } else {
            if (features[45] <= 13.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 47;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 1;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        }
      }
    } else {
      if (features[52] <= 7.50000000f) {
        if (features[21] <= 0.50000000f) {
          if (features[54] <= 4.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 3;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            if (features[19] <= 2.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 5;
              values[7] = 0;
              values[8] = 1;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 95;
              values[7] = 0;
              values[8] = 1;
              values[9] = 0;
            }
          }
        } else {
          if (features[42] <= 10.50000000f) {
            if (features[17] <= 5.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 7;
              values[3] = 1;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 3;
              values[9] = 3;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 9;
              values[9] = 0;
            }
          } else {
            if (features[53] <= 4.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 2;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 1;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 25;
              values[9] = 0;
            }
          }
        }
      } else {
        if (features[37] <= 1.50000000f) {
          if (features[44] <= 13.50000000f) {
            if (features[26] <= 14.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 79;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 1;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[51] <= 14.00000000f) {
              values[0] = 0;
              values[1] = 8;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 1;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 1;
              values[2] = 3;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 4;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        } else {
          if (features[51] <= 12.50000000f) {
            if (features[19] <= 7.00000000f) {
              values[0] = 0;
              values[1] = 1;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 1;
            } else {
              values[0] = 0;
              values[1] = 15;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[3] <= 14.50000000f) {
              values[0] = 2;
              values[1] = 4;
              values[2] = 6;
              values[3] = 2;
              values[4] = 0;
              values[5] = 0;
              values[6] = 10;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 1;
              values[2] = 25;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        }
      }
    }
  }

  return argmax(10, values);
}

int predict_1(const float features[]) {
  int values[10];
  
  if (features[34] <= 7.50000000f) {
    if (features[19] <= 14.50000000f) {
      if (features[51] <= 12.50000000f) {
        if (features[30] <= 1.50000000f) {
          if (features[35] <= 12.50000000f) {
            if (features[6] <= 2.50000000f) {
              values[0] = 0;
              values[1] = 5;
              values[2] = 3;
              values[3] = 104;
              values[4] = 0;
              values[5] = 12;
              values[6] = 0;
              values[7] = 0;
              values[8] = 5;
              values[9] = 34;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 4;
              values[4] = 0;
              values[5] = 21;
              values[6] = 0;
              values[7] = 4;
              values[8] = 0;
              values[9] = 1;
            }
          } else {
            if (features[46] <= 4.50000000f) {
              values[0] = 0;
              values[1] = 1;
              values[2] = 9;
              values[3] = 6;
              values[4] = 1;
              values[5] = 2;
              values[6] = 0;
              values[7] = 4;
              values[8] = 36;
              values[9] = 1;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 2;
              values[3] = 14;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        } else {
          if (features[42] <= 4.50000000f) {
            if (features[4] <= 15.50000000f) {
              values[0] = 2;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 2;
              values[6] = 0;
              values[7] = 4;
              values[8] = 2;
              values[9] = 64;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 5;
              values[6] = 0;
              values[7] = 4;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[51] <= 1.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 2;
              values[8] = 5;
              values[9] = 0;
            } else {
              values[0] = 11;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 1;
            }
          }
        }
      } else {
        if (features[34] <= 1.50000000f) {
          if (features[61] <= 2.50000000f) {
            if (features[21] <= 1.00000000f) {
              values[0] = 0;
              values[1] = 1;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 8;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 4;
              values[2] = 5;
              values[3] = 2;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 9;
              values[8] = 0;
              values[9] = 1;
            }
          } else {
            if (features[38] <= 0.50000000f) {
              values[0] = 0;
              values[1] = 2;
              values[2] = 100;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 1;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 4;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 3;
              values[9] = 0;
            }
          }
        } else {
          if (features[37] <= 10.00000000f) {
            if (features[21] <= 2.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 3;
              values[3] = 0;
              values[4] = 0;
              values[5] = 14;
              values[6] = 0;
              values[7] = 0;
              values[8] = 1;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 5;
              values[2] = 9;
              values[3] = 0;
              values[4] = 1;
              values[5] = 0;
              values[6] = 0;
              values[7] = 7;
              values[8] = 8;
              values[9] = 2;
            }
          } else {
            if (features[60] <= 7.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 1;
              values[6] = 0;
              values[7] = 21;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 1;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 1;
              values[9] = 1;
            }
          }
        }
      }
    } else {
      if (features[52] <= 8.50000000f) {
        if (features[17] <= 1.00000000f) {
          if (features[50] <= 2.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 2;
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 8;
            values[9] = 0;
          }
        } else {
          if (features[52] <= 5.50000000f) {
            values[0] = 0;
            values[1] = 2;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            if (features[43] <= 10.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 4;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 2;
              values[3] = 0;
              values[4] = 0;
              values[5] = 1;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        }
      } else {
        if (features[50] <= 10.50000000f) {
          if (features[2] <= 12.00000000f) {
            if (features[30] <= 4.50000000f) {
              values[0] = 0;
              values[1] = 73;
              values[2] = 0;
              values[3] = 2;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 1;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 2;
            }
          } else {
            if (features[1] <= 0.50000000f) {
              values[0] = 0;
              values[1] = 4;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 2;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        } else {
          if (features[29] <= 6.50000000f) {
            if (features[61] <= 6.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 5;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 4;
              values[2] = 1;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 1;
            }
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 2;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        }
      }
    }
  } else {
    if (features[28] <= 0.50000000f) {
      if (features[36] <= 3.50000000f) {
        if (features[6] <= 1.50000000f) {
          if (features[44] <= 6.50000000f) {
            values[0] = 117;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            if (features[21] <= 5.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 8;
              values[5] = 0;
              values[6] = 1;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 13;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        } else {
          values[0] = 0;
          values[1] = 0;
          values[2] = 0;
          values[3] = 0;
          values[4] = 0;
          values[5] = 8;
          values[6] = 0;
          values[7] = 0;
          values[8] = 0;
          values[9] = 0;
        }
      } else {
        if (features[62] <= 0.50000000f) {
          if (features[17] <= 0.50000000f) {
            if (features[19] <= 11.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 1;
              values[4] = 4;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 10;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[59] <= 15.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 1;
              values[5] = 1;
              values[6] = 7;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 5;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        } else {
          values[0] = 0;
          values[1] = 0;
          values[2] = 0;
          values[3] = 0;
          values[4] = 0;
          values[5] = 0;
          values[6] = 44;
          values[7] = 0;
          values[8] = 0;
          values[9] = 0;
        }
      }
    } else {
      if (features[10] <= 6.50000000f) {
        if (features[27] <= 12.50000000f) {
          if (features[13] <= 8.50000000f) {
            if (features[61] <= 8.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 60;
              values[5] = 0;
              values[6] = 0;
              values[7] = 2;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 3;
              values[5] = 0;
              values[6] = 8;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[19] <= 3.50000000f) {
              values[0] = 0;
              values[1] = 1;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 9;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 9;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 2;
              values[9] = 2;
            }
          }
        } else {
          if (features[37] <= 6.00000000f) {
            if (features[52] <= 6.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 1;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 20;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[54] <= 2.50000000f) {
              values[0] = 0;
              values[1] = 4;
              values[2] = 0;
              values[3] = 0;
              values[4] = 10;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 6;
            } else {
              values[0] = 0;
              values[1] = 1;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 29;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        }
      } else {
        if (features[61] <= 0.50000000f) {
          if (features[18] <= 13.50000000f) {
            if (features[36] <= 10.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 2;
              values[6] = 0;
              values[7] = 1;
              values[8] = 5;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 1;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 69;
              values[8] = 1;
              values[9] = 0;
            }
          } else {
            if (features[2] <= 3.50000000f) {
              values[0] = 0;
              values[1] = 1;
              values[2] = 0;
              values[3] = 0;
              values[4] = 15;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 4;
              values[2] = 0;
              values[3] = 0;
              values[4] = 1;
              values[5] = 13;
              values[6] = 0;
              values[7] = 3;
              values[8] = 2;
              values[9] = 0;
            }
          }
        } else {
          if (features[20] <= 0.50000000f) {
            if (features[41] <= 1.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 26;
              values[6] = 2;
              values[7] = 0;
              values[8] = 1;
              values[9] = 5;
            } else {
              values[0] = 3;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 10;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[28] <= 13.50000000f) {
              values[0] = 7;
              values[1] = 4;
              values[2] = 10;
              values[3] = 1;
              values[4] = 0;
              values[5] = 2;
              values[6] = 4;
              values[7] = 0;
              values[8] = 2;
              values[9] = 5;
            } else {
              values[0] = 0;
              values[1] = 9;
              values[2] = 3;
              values[3] = 0;
              values[4] = 0;
              values[5] = 2;
              values[6] = 4;
              values[7] = 0;
              values[8] = 37;
              values[9] = 3;
            }
          }
        }
      }
    }
  }

  return argmax(10, values);
}

int predict_2(const float features[]) {
  int values[10];
  
  if (features[21] <= 1.50000000f) {
    if (features[61] <= 6.50000000f) {
      if (features[27] <= 6.50000000f) {
        if (features[6] <= 0.50000000f) {
          if (features[29] <= 1.00000000f) {
            if (features[28] <= 6.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 1;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 1;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 22;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        } else {
          if (features[22] <= 4.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 11;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            values[0] = 1;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        }
      } else {
        if (features[43] <= 10.50000000f) {
          if (features[12] <= 13.50000000f) {
            if (features[2] <= 1.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 3;
              values[5] = 1;
              values[6] = 0;
              values[7] = 1;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 71;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[34] <= 7.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 5;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 4;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        } else {
          if (features[5] <= 5.50000000f) {
            if (features[38] <= 1.00000000f) {
              values[0] = 0;
              values[1] = 17;
              values[2] = 1;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 10;
              values[5] = 0;
              values[6] = 0;
              values[7] = 3;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[45] <= 8.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 12;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 1;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        }
      }
    } else {
      if (features[42] <= 7.50000000f) {
        if (features[38] <= 0.50000000f) {
          if (features[12] <= 3.50000000f) {
            values[0] = 0;
            values[1] = 10;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            if (features[43] <= 3.50000000f) {
              values[0] = 0;
              values[1] = 1;
              values[2] = 0;
              values[3] = 4;
              values[4] = 0;
              values[5] = 1;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 1;
              values[2] = 36;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 4;
              values[9] = 0;
            }
          }
        } else {
          if (features[18] <= 4.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 3;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            if (features[12] <= 12.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 14;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 2;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        }
      } else {
        if (features[1] <= 0.50000000f) {
          if (features[50] <= 2.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 3;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            if (features[33] <= 10.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 1;
              values[3] = 1;
              values[4] = 1;
              values[5] = 0;
              values[6] = 115;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 2;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        } else {
          if (features[9] <= 3.00000000f) {
            values[0] = 0;
            values[1] = 2;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 17;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        }
      }
    }
  } else {
    if (features[35] <= 11.50000000f) {
      if (features[28] <= 0.50000000f) {
        if (features[2] <= 0.50000000f) {
          if (features[19] <= 11.00000000f) {
            if (features[22] <= 11.00000000f) {
              values[0] = 15;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 1;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[43] <= 9.00000000f) {
              values[0] = 1;
              values[1] = 2;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 1;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 10;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        } else {
          if (features[11] <= 8.50000000f) {
            if (features[33] <= 2.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 1;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 5;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            values[0] = 96;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        }
      } else {
        if (features[45] <= 4.50000000f) {
          if (features[26] <= 7.50000000f) {
            if (features[37] <= 9.50000000f) {
              values[0] = 0;
              values[1] = 2;
              values[2] = 49;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 3;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 4;
              values[3] = 1;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 5;
            }
          } else {
            if (features[4] <= 12.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 2;
              values[3] = 0;
              values[4] = 7;
              values[5] = 0;
              values[6] = 0;
              values[7] = 10;
              values[8] = 0;
              values[9] = 2;
            } else {
              values[0] = 0;
              values[1] = 3;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 2;
              values[8] = 2;
              values[9] = 8;
            }
          }
        } else {
          if (features[53] <= 8.50000000f) {
            if (features[43] <= 6.00000000f) {
              values[0] = 3;
              values[1] = 1;
              values[2] = 2;
              values[3] = 10;
              values[4] = 0;
              values[5] = 4;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 27;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 29;
              values[5] = 0;
              values[6] = 0;
              values[7] = 8;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[26] <= 2.50000000f) {
              values[0] = 0;
              values[1] = 3;
              values[2] = 10;
              values[3] = 96;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 3;
            } else {
              values[0] = 10;
              values[1] = 13;
              values[2] = 1;
              values[3] = 11;
              values[4] = 2;
              values[5] = 5;
              values[6] = 1;
              values[7] = 0;
              values[8] = 10;
              values[9] = 72;
            }
          }
        }
      }
    } else {
      if (features[38] <= 0.50000000f) {
        if (features[11] <= 15.50000000f) {
          if (features[42] <= 7.50000000f) {
            if (features[20] <= 6.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 1;
              values[4] = 2;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 8;
              values[9] = 7;
            } else {
              values[0] = 0;
              values[1] = 7;
              values[2] = 11;
              values[3] = 12;
              values[4] = 1;
              values[5] = 0;
              values[6] = 0;
              values[7] = 7;
              values[8] = 2;
              values[9] = 1;
            }
          } else {
            if (features[10] <= 2.50000000f) {
              values[0] = 0;
              values[1] = 14;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 3;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 8;
              values[3] = 0;
              values[4] = 3;
              values[5] = 0;
              values[6] = 0;
              values[7] = 1;
              values[8] = 84;
              values[9] = 0;
            }
          }
        } else {
          if (features[53] <= 13.00000000f) {
            if (features[20] <= 13.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 2;
              values[5] = 1;
              values[6] = 0;
              values[7] = 0;
              values[8] = 7;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 40;
              values[2] = 1;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[13] <= 15.50000000f) {
              values[0] = 0;
              values[1] = 1;
              values[2] = 2;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 9;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 3;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        }
      } else {
        if (features[5] <= 9.50000000f) {
          if (features[50] <= 1.50000000f) {
            if (features[62] <= 3.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 1;
              values[4] = 34;
              values[5] = 0;
              values[6] = 0;
              values[7] = 4;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 2;
            }
          } else {
            if (features[18] <= 4.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 2;
              values[4] = 1;
              values[5] = 0;
              values[6] = 0;
              values[7] = 19;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 2;
              values[5] = 0;
              values[6] = 0;
              values[7] = 3;
              values[8] = 4;
              values[9] = 11;
            }
          }
        } else {
          if (features[41] <= 5.50000000f) {
            if (features[62] <= 0.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 82;
              values[8] = 0;
              values[9] = 1;
            } else {
              values[0] = 0;
              values[1] = 2;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 2;
            }
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 3;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        }
      }
    }
  }

  return argmax(10, values);
}

int predict_3(const float features[]) {
  int values[10];
  
  if (features[34] <= 7.50000000f) {
    if (features[27] <= 7.50000000f) {
      if (features[10] <= 14.50000000f) {
        if (features[38] <= 1.50000000f) {
          if (features[43] <= 0.50000000f) {
            if (features[59] <= 6.00000000f) {
              values[0] = 0;
              values[1] = 4;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 1;
              values[1] = 0;
              values[2] = 0;
              values[3] = 30;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[5] <= 6.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 18;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 6;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 1;
              values[2] = 7;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 14;
              values[8] = 0;
              values[9] = 0;
            }
          }
        } else {
          if (features[62] <= 0.50000000f) {
            if (features[53] <= 0.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 33;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 3;
              values[1] = 0;
              values[2] = 0;
              values[3] = 5;
              values[4] = 2;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[45] <= 14.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 3;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 1;
            } else {
              values[0] = 0;
              values[1] = 9;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        }
      } else {
        if (features[62] <= 5.50000000f) {
          if (features[45] <= 4.50000000f) {
            if (features[4] <= 15.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 17;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 1;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 2;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 2;
              values[8] = 2;
              values[9] = 0;
            }
          } else {
            if (features[12] <= 6.50000000f) {
              values[0] = 5;
              values[1] = 0;
              values[2] = 0;
              values[3] = 1;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 4;
              values[3] = 14;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 2;
            }
          }
        } else {
          if (features[26] <= 13.50000000f) {
            if (features[3] <= 9.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 1;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 48;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 1;
          }
        }
      }
    } else {
      if (features[38] <= 1.50000000f) {
        if (features[18] <= 8.50000000f) {
          if (features[51] <= 9.50000000f) {
            if (features[2] <= 15.00000000f) {
              values[0] = 0;
              values[1] = 2;
              values[2] = 0;
              values[3] = 26;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 1;
              values[8] = 9;
              values[9] = 3;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 3;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[44] <= 4.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 19;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 2;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 36;
              values[2] = 3;
              values[3] = 3;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 1;
              values[8] = 10;
              values[9] = 0;
            }
          }
        } else {
          if (features[58] <= 11.50000000f) {
            if (features[19] <= 14.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 7;
              values[3] = 1;
              values[4] = 1;
              values[5] = 6;
              values[6] = 0;
              values[7] = 0;
              values[8] = 59;
              values[9] = 20;
            } else {
              values[0] = 0;
              values[1] = 19;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 2;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 3;
            }
          } else {
            if (features[51] <= 2.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 1;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 8;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 2;
              values[3] = 0;
              values[4] = 1;
              values[5] = 37;
              values[6] = 0;
              values[7] = 1;
              values[8] = 2;
              values[9] = 0;
            }
          }
        }
      } else {
        if (features[36] <= 10.50000000f) {
          if (features[21] <= 9.00000000f) {
            if (features[21] <= 5.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 2;
              values[4] = 0;
              values[5] = 18;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 4;
              values[4] = 0;
              values[5] = 2;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 2;
            }
          } else {
            if (features[29] <= 13.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 5;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 8;
            } else {
              values[0] = 0;
              values[1] = 1;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 65;
            }
          }
        } else {
          if (features[46] <= 2.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 5;
            values[8] = 0;
            values[9] = 0;
          } else {
            if (features[10] <= 6.00000000f) {
              values[0] = 0;
              values[1] = 5;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 1;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 22;
              values[4] = 0;
              values[5] = 3;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 1;
            }
          }
        }
      }
    }
  } else {
    if (features[58] <= 0.50000000f) {
      if (features[61] <= 11.50000000f) {
        if (features[41] <= 3.50000000f) {
          if (features[30] <= 6.50000000f) {
            if (features[53] <= 8.50000000f) {
              values[0] = 2;
              values[1] = 1;
              values[2] = 0;
              values[3] = 0;
              values[4] = 18;
              values[5] = 0;
              values[6] = 0;
              values[7] = 5;
              values[8] = 0;
              values[9] = 6;
            } else {
              values[0] = 7;
              values[1] = 7;
              values[2] = 0;
              values[3] = 0;
              values[4] = 1;
              values[5] = 0;
              values[6] = 7;
              values[7] = 0;
              values[8] = 1;
              values[9] = 1;
            }
          } else {
            if (features[6] <= 13.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 23;
              values[5] = 0;
              values[6] = 0;
              values[7] = 1;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 2;
              values[8] = 0;
              values[9] = 0;
            }
          }
        } else {
          if (features[19] <= 3.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 2;
            values[8] = 0;
            values[9] = 0;
          } else {
            if (features[26] <= 3.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 1;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 71;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        }
      } else {
        if (features[50] <= 1.50000000f) {
          values[0] = 0;
          values[1] = 8;
          values[2] = 0;
          values[3] = 0;
          values[4] = 0;
          values[5] = 0;
          values[6] = 0;
          values[7] = 0;
          values[8] = 0;
          values[9] = 0;
        } else {
          if (features[45] <= 15.00000000f) {
            if (features[11] <= 12.50000000f) {
              values[0] = 1;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 32;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[3] <= 3.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 1;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 2;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        }
      }
    } else {
      if (features[20] <= 6.50000000f) {
        if (features[44] <= 3.50000000f) {
          if (features[13] <= 4.50000000f) {
            if (features[5] <= 7.50000000f) {
              values[0] = 1;
              values[1] = 0;
              values[2] = 0;
              values[3] = 2;
              values[4] = 0;
              values[5] = 0;
              values[6] = 38;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 11;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[30] <= 2.50000000f) {
              values[0] = 2;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 11;
              values[6] = 0;
              values[7] = 0;
              values[8] = 1;
              values[9] = 3;
            } else {
              values[0] = 88;
              values[1] = 0;
              values[2] = 0;
              values[3] = 2;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 7;
            }
          }
        } else {
          if (features[50] <= 7.50000000f) {
            if (features[30] <= 0.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 36;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 13;
              values[5] = 4;
              values[6] = 0;
              values[7] = 14;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[46] <= 5.50000000f) {
              values[0] = 11;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 3;
              values[5] = 3;
              values[6] = 11;
              values[7] = 0;
              values[8] = 5;
              values[9] = 0;
            } else {
              values[0] = 1;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 33;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        }
      } else {
        if (features[61] <= 0.50000000f) {
          if (features[29] <= 3.50000000f) {
            if (features[28] <= 10.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 11;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 10;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 2;
              values[8] = 3;
              values[9] = 0;
            }
          } else {
            if (features[59] <= 15.50000000f) {
              values[0] = 0;
              values[1] = 3;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 46;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 2;
              values[5] = 0;
              values[6] = 0;
              values[7] = 4;
              values[8] = 3;
              values[9] = 0;
            }
          }
        } else {
          if (features[36] <= 5.00000000f) {
            if (features[37] <= 2.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 8;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 13;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[35] <= 14.50000000f) {
              values[0] = 0;
              values[1] = 1;
              values[2] = 0;
              values[3] = 1;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 11;
              values[9] = 6;
            } else {
              values[0] = 0;
              values[1] = 34;
              values[2] = 0;
              values[3] = 6;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 13;
              values[9] = 1;
            }
          }
        }
      }
    }
  }

  return argmax(10, values);
}

int predict_4(const float features[]) {
  int values[10];
  
  if (features[33] <= 3.50000000f) {
    if (features[21] <= 2.50000000f) {
      if (features[6] <= 0.50000000f) {
        if (features[5] <= 3.50000000f) {
          if (features[10] <= 12.50000000f) {
            if (features[34] <= 13.50000000f) {
              values[0] = 0;
              values[1] = 34;
              values[2] = 0;
              values[3] = 5;
              values[4] = 1;
              values[5] = 2;
              values[6] = 7;
              values[7] = 1;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 3;
              values[5] = 0;
              values[6] = 27;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[27] <= 14.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 53;
              values[3] = 3;
              values[4] = 0;
              values[5] = 2;
              values[6] = 2;
              values[7] = 4;
              values[8] = 2;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 5;
              values[2] = 5;
              values[3] = 5;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 1;
              values[9] = 0;
            }
          }
        } else {
          if (features[17] <= 0.50000000f) {
            if (features[42] <= 15.00000000f) {
              values[0] = 0;
              values[1] = 1;
              values[2] = 0;
              values[3] = 1;
              values[4] = 2;
              values[5] = 3;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 4;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[26] <= 7.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 1;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 21;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        }
      } else {
        if (features[30] <= 8.50000000f) {
          values[0] = 0;
          values[1] = 0;
          values[2] = 0;
          values[3] = 0;
          values[4] = 0;
          values[5] = 66;
          values[6] = 0;
          values[7] = 0;
          values[8] = 0;
          values[9] = 0;
        } else {
          values[0] = 0;
          values[1] = 0;
          values[2] = 0;
          values[3] = 0;
          values[4] = 0;
          values[5] = 0;
          values[6] = 0;
          values[7] = 1;
          values[8] = 0;
          values[9] = 0;
        }
      }
    } else {
      if (features[35] <= 11.50000000f) {
        if (features[51] <= 12.50000000f) {
          if (features[36] <= 10.50000000f) {
            if (features[27] <= 6.50000000f) {
              values[0] = 10;
              values[1] = 8;
              values[2] = 4;
              values[3] = 16;
              values[4] = 0;
              values[5] = 1;
              values[6] = 0;
              values[7] = 5;
              values[8] = 0;
              values[9] = 4;
            } else {
              values[0] = 2;
              values[1] = 2;
              values[2] = 0;
              values[3] = 16;
              values[4] = 0;
              values[5] = 4;
              values[6] = 0;
              values[7] = 0;
              values[8] = 1;
              values[9] = 97;
            }
          } else {
            if (features[26] <= 6.50000000f) {
              values[0] = 0;
              values[1] = 1;
              values[2] = 1;
              values[3] = 59;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 6;
              values[8] = 2;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 18;
              values[2] = 0;
              values[3] = 1;
              values[4] = 2;
              values[5] = 1;
              values[6] = 0;
              values[7] = 0;
              values[8] = 7;
              values[9] = 9;
            }
          }
        } else {
          if (features[36] <= 9.00000000f) {
            if (features[10] <= 11.50000000f) {
              values[0] = 7;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 1;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 6;
            }
          } else {
            if (features[37] <= 13.50000000f) {
              values[0] = 0;
              values[1] = 1;
              values[2] = 45;
              values[3] = 0;
              values[4] = 2;
              values[5] = 1;
              values[6] = 0;
              values[7] = 8;
              values[8] = 4;
              values[9] = 1;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 8;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 2;
              values[9] = 0;
            }
          }
        }
      } else {
        if (features[6] <= 4.50000000f) {
          if (features[50] <= 9.50000000f) {
            if (features[61] <= 0.50000000f) {
              values[0] = 0;
              values[1] = 6;
              values[2] = 0;
              values[3] = 8;
              values[4] = 0;
              values[5] = 4;
              values[6] = 0;
              values[7] = 46;
              values[8] = 1;
              values[9] = 4;
            } else {
              values[0] = 0;
              values[1] = 25;
              values[2] = 3;
              values[3] = 5;
              values[4] = 3;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 28;
              values[9] = 8;
            }
          } else {
            if (features[26] <= 0.50000000f) {
              values[0] = 0;
              values[1] = 1;
              values[2] = 18;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 6;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 3;
              values[2] = 7;
              values[3] = 6;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 10;
              values[8] = 73;
              values[9] = 4;
            }
          }
        } else {
          if (features[60] <= 9.50000000f) {
            if (features[38] <= 0.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 2;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 4;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 41;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[29] <= 6.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 1;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 3;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        }
      }
    }
  } else {
    if (features[36] <= 0.50000000f) {
      if (features[19] <= 0.50000000f) {
        if (features[57] <= 0.50000000f) {
          values[0] = 23;
          values[1] = 0;
          values[2] = 0;
          values[3] = 0;
          values[4] = 0;
          values[5] = 0;
          values[6] = 0;
          values[7] = 0;
          values[8] = 0;
          values[9] = 0;
        } else {
          if (features[13] <= 10.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 9;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            values[0] = 1;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        }
      } else {
        if (features[37] <= 0.50000000f) {
          values[0] = 0;
          values[1] = 0;
          values[2] = 0;
          values[3] = 0;
          values[4] = 0;
          values[5] = 0;
          values[6] = 0;
          values[7] = 0;
          values[8] = 1;
          values[9] = 0;
        } else {
          if (features[59] <= 4.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 1;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            values[0] = 93;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        }
      }
    } else {
      if (features[46] <= 6.50000000f) {
        if (features[5] <= 4.50000000f) {
          if (features[26] <= 10.00000000f) {
            if (features[35] <= 15.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 1;
              values[5] = 0;
              values[6] = 3;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 8;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[10] <= 10.50000000f) {
              values[0] = 0;
              values[1] = 1;
              values[2] = 0;
              values[3] = 0;
              values[4] = 104;
              values[5] = 0;
              values[6] = 2;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 2;
              values[2] = 0;
              values[3] = 0;
              values[4] = 6;
              values[5] = 0;
              values[6] = 4;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        } else {
          if (features[10] <= 3.50000000f) {
            if (features[41] <= 4.00000000f) {
              values[0] = 0;
              values[1] = 11;
              values[2] = 0;
              values[3] = 0;
              values[4] = 3;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 1;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 24;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[43] <= 15.50000000f) {
              values[0] = 2;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 18;
              values[6] = 7;
              values[7] = 13;
              values[8] = 2;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 8;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        }
      } else {
        if (features[12] <= 15.00000000f) {
          if (features[54] <= 2.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 2;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            if (features[13] <= 13.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 50;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 1;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        } else {
          values[0] = 0;
          values[1] = 0;
          values[2] = 0;
          values[3] = 0;
          values[4] = 1;
          values[5] = 0;
          values[6] = 0;
          values[7] = 0;
          values[8] = 0;
          values[9] = 0;
        }
      }
    }
  }

  return argmax(10, values);
}

extern "C" void predict(float features[N_FEATURES], int& output) {
#ifdef __SYNTHESIS__
  #pragma HLS INTERFACE ap_ctrl_none port=return
  #pragma HLS INTERFACE m_axi depth=64 offset=slave port=features
  #pragma HLS INTERFACE s_axilite port=output
  #pragma HLS dataflow
#endif

  float buffer[N_FEATURES];
  memcpy(buffer, features, sizeof(float) * N_FEATURES);

  int values[10] = { 0 };

values[predict_0(buffer)]++;
values[predict_1(buffer)]++;
values[predict_2(buffer)]++;
values[predict_3(buffer)]++;
values[predict_4(buffer)]++;

  output = argmax(10, values);
}
