
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
            values[0] = 0;
            values[1] = 2;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 2;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        } else {
          if (features[54] <= 3.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 55;
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
            values[5] = 11;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        }
      } else {
        if (features[52] <= 2.50000000f) {
          if (features[9] <= 10.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 2;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 48;
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
        } else {
          if (features[11] <= 12.50000000f) {
            values[0] = 6;
            values[1] = 10;
            values[2] = 1;
            values[3] = 70;
            values[4] = 0;
            values[5] = 6;
            values[6] = 0;
            values[7] = 0;
            values[8] = 2;
            values[9] = 32;
          } else {
            values[0] = 3;
            values[1] = 5;
            values[2] = 0;
            values[3] = 3;
            values[4] = 1;
            values[5] = 3;
            values[6] = 0;
            values[7] = 1;
            values[8] = 1;
            values[9] = 29;
          }
        }
      }
    } else {
      if (features[28] <= 3.50000000f) {
        if (features[58] <= 0.50000000f) {
          if (features[25] <= 7.50000000f) {
            values[0] = 6;
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
            values[6] = 1;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        } else {
          values[0] = 81;
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
        if (features[38] <= 0.50000000f) {
          if (features[35] <= 7.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 3;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 2;
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 1;
            values[3] = 1;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 14;
            values[9] = 0;
          }
        } else {
          if (features[58] <= 4.00000000f) {
            values[0] = 1;
            values[1] = 4;
            values[2] = 0;
            values[3] = 0;
            values[4] = 2;
            values[5] = 2;
            values[6] = 6;
            values[7] = 0;
            values[8] = 0;
            values[9] = 3;
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 9;
            values[4] = 0;
            values[5] = 1;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 1;
          }
        }
      }
    }
  } else {
    if (features[30] <= 0.50000000f) {
      if (features[54] <= 1.50000000f) {
        if (features[9] <= 1.50000000f) {
          if (features[27] <= 9.50000000f) {
            values[0] = 0;
            values[1] = 3;
            values[2] = 7;
            values[3] = 0;
            values[4] = 31;
            values[5] = 4;
            values[6] = 3;
            values[7] = 28;
            values[8] = 4;
            values[9] = 0;
          } else {
            values[0] = 0;
            values[1] = 83;
            values[2] = 0;
            values[3] = 1;
            values[4] = 7;
            values[5] = 2;
            values[6] = 2;
            values[7] = 0;
            values[8] = 24;
            values[9] = 2;
          }
        } else {
          if (features[28] <= 7.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 45;
            values[6] = 0;
            values[7] = 1;
            values[8] = 2;
            values[9] = 0;
          } else {
            values[0] = 0;
            values[1] = 2;
            values[2] = 6;
            values[3] = 9;
            values[4] = 2;
            values[5] = 8;
            values[6] = 0;
            values[7] = 2;
            values[8] = 18;
            values[9] = 1;
          }
        }
      } else {
        if (features[34] <= 11.50000000f) {
          if (features[2] <= 4.50000000f) {
            values[0] = 0;
            values[1] = 5;
            values[2] = 12;
            values[3] = 3;
            values[4] = 0;
            values[5] = 0;
            values[6] = 11;
            values[7] = 0;
            values[8] = 34;
            values[9] = 0;
          } else {
            values[0] = 0;
            values[1] = 6;
            values[2] = 114;
            values[3] = 2;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 12;
            values[9] = 0;
          }
        } else {
          if (features[62] <= 14.00000000f) {
            values[0] = 0;
            values[1] = 2;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 109;
            values[7] = 0;
            values[8] = 2;
            values[9] = 0;
          } else {
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
          }
        }
      }
    } else {
      if (features[26] <= 10.50000000f) {
        if (features[61] <= 1.50000000f) {
          values[0] = 0;
          values[1] = 0;
          values[2] = 0;
          values[3] = 0;
          values[4] = 0;
          values[5] = 0;
          values[6] = 0;
          values[7] = 96;
          values[8] = 0;
          values[9] = 0;
        } else {
          if (features[18] <= 4.00000000f) {
            values[0] = 0;
            values[1] = 2;
            values[2] = 4;
            values[3] = 0;
            values[4] = 2;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 2;
            values[9] = 0;
          } else {
            values[0] = 2;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 22;
            values[9] = 1;
          }
        }
      } else {
        if (features[37] <= 14.50000000f) {
          if (features[28] <= 0.50000000f) {
            values[0] = 26;
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
            values[1] = 1;
            values[2] = 0;
            values[3] = 0;
            values[4] = 11;
            values[5] = 0;
            values[6] = 3;
            values[7] = 12;
            values[8] = 11;
            values[9] = 3;
          }
        } else {
          if (features[36] <= 0.50000000f) {
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
          } else {
            values[0] = 2;
            values[1] = 3;
            values[2] = 0;
            values[3] = 0;
            values[4] = 81;
            values[5] = 2;
            values[6] = 1;
            values[7] = 0;
            values[8] = 0;
            values[9] = 1;
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
            values[0] = 0;
            values[1] = 5;
            values[2] = 3;
            values[3] = 108;
            values[4] = 0;
            values[5] = 33;
            values[6] = 0;
            values[7] = 4;
            values[8] = 5;
            values[9] = 35;
          } else {
            values[0] = 0;
            values[1] = 1;
            values[2] = 11;
            values[3] = 20;
            values[4] = 1;
            values[5] = 2;
            values[6] = 0;
            values[7] = 4;
            values[8] = 36;
            values[9] = 1;
          }
        } else {
          if (features[27] <= 5.00000000f) {
            values[0] = 13;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 6;
            values[8] = 0;
            values[9] = 0;
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 7;
            values[6] = 0;
            values[7] = 4;
            values[8] = 7;
            values[9] = 65;
          }
        }
      } else {
        if (features[54] <= 0.50000000f) {
          if (features[2] <= 11.50000000f) {
            values[0] = 0;
            values[1] = 12;
            values[2] = 10;
            values[3] = 2;
            values[4] = 1;
            values[5] = 1;
            values[6] = 0;
            values[7] = 35;
            values[8] = 5;
            values[9] = 3;
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 22;
            values[6] = 0;
            values[7] = 2;
            values[8] = 0;
            values[9] = 0;
          }
        } else {
          if (features[38] <= 0.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 108;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 6;
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
            values[9] = 1;
          }
        }
      }
    } else {
      if (features[52] <= 8.50000000f) {
        if (features[37] <= 9.00000000f) {
          if (features[51] <= 14.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 7;
            values[9] = 0;
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
            values[9] = 1;
          }
        } else {
          if (features[22] <= 3.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 1;
            values[9] = 5;
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
        if (features[14] <= 4.50000000f) {
          if (features[36] <= 6.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 1;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 2;
            values[9] = 0;
          } else {
            values[0] = 0;
            values[1] = 79;
            values[2] = 0;
            values[3] = 2;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 1;
            values[9] = 2;
          }
        } else {
          if (features[18] <= 6.50000000f) {
            values[0] = 0;
            values[1] = 0;
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
            values[1] = 2;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 4;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 1;
          }
        }
      }
    }
  } else {
    if (features[44] <= 6.50000000f) {
      if (features[10] <= 8.50000000f) {
        if (features[13] <= 4.50000000f) {
          if (features[14] <= 5.50000000f) {
            values[0] = 0;
            values[1] = 1;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 4;
            values[6] = 57;
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
            values[8] = 0;
            values[9] = 2;
          }
        } else {
          if (features[22] <= 6.00000000f) {
            values[0] = 17;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 1;
            values[7] = 0;
            values[8] = 4;
            values[9] = 1;
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
            values[9] = 5;
          }
        }
      } else {
        if (features[28] <= 2.50000000f) {
          if (features[13] <= 2.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 2;
            values[3] = 1;
            values[4] = 0;
            values[5] = 0;
            values[6] = 10;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            values[0] = 107;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 3;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        } else {
          if (features[53] <= 0.50000000f) {
            values[0] = 0;
            values[1] = 1;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 1;
            values[6] = 0;
            values[7] = 12;
            values[8] = 3;
            values[9] = 2;
          } else {
            values[0] = 3;
            values[1] = 0;
            values[2] = 11;
            values[3] = 0;
            values[4] = 0;
            values[5] = 20;
            values[6] = 5;
            values[7] = 0;
            values[8] = 5;
            values[9] = 11;
          }
        }
      }
    } else {
      if (features[41] <= 4.50000000f) {
        if (features[21] <= 0.50000000f) {
          if (features[62] <= 0.50000000f) {
            values[0] = 0;
            values[1] = 5;
            values[2] = 0;
            values[3] = 0;
            values[4] = 7;
            values[5] = 31;
            values[6] = 2;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            values[0] = 0;
            values[1] = 5;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 29;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        } else {
          if (features[61] <= 0.50000000f) {
            values[0] = 1;
            values[1] = 10;
            values[2] = 0;
            values[3] = 0;
            values[4] = 26;
            values[5] = 0;
            values[6] = 0;
            values[7] = 63;
            values[8] = 5;
            values[9] = 0;
          } else {
            values[0] = 6;
            values[1] = 20;
            values[2] = 0;
            values[3] = 1;
            values[4] = 6;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 27;
            values[9] = 0;
          }
        }
      } else {
        if (features[17] <= 1.50000000f) {
          if (features[43] <= 3.50000000f) {
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
            values[1] = 2;
            values[2] = 0;
            values[3] = 0;
            values[4] = 81;
            values[5] = 0;
            values[6] = 0;
            values[7] = 8;
            values[8] = 0;
            values[9] = 0;
          }
        } else {
          if (features[30] <= 3.00000000f) {
            values[0] = 0;
            values[1] = 1;
            values[2] = 0;
            values[3] = 0;
            values[4] = 1;
            values[5] = 0;
            values[6] = 5;
            values[7] = 1;
            values[8] = 2;
            values[9] = 0;
          } else {
            values[0] = 6;
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
            values[0] = 0;
            values[1] = 0;
            values[2] = 1;
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
            values[4] = 22;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        } else {
          if (features[13] <= 9.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 10;
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
            values[5] = 1;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        }
      } else {
        if (features[5] <= 5.50000000f) {
          if (features[44] <= 2.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 3;
            values[4] = 0;
            values[5] = 1;
            values[6] = 0;
            values[7] = 3;
            values[8] = 0;
            values[9] = 0;
          } else {
            values[0] = 0;
            values[1] = 17;
            values[2] = 1;
            values[3] = 0;
            values[4] = 13;
            values[5] = 3;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        } else {
          if (features[61] <= 5.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 1;
            values[5] = 83;
            values[6] = 0;
            values[7] = 1;
            values[8] = 0;
            values[9] = 0;
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 1;
            values[4] = 0;
            values[5] = 2;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        }
      }
    } else {
      if (features[20] <= 2.50000000f) {
        if (features[50] <= 2.50000000f) {
          if (features[33] <= 11.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 6;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
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
        } else {
          if (features[59] <= 15.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 100;
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
      } else {
        if (features[45] <= 1.00000000f) {
          if (features[44] <= 10.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 42;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            values[0] = 0;
            values[1] = 5;
            values[2] = 7;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        } else {
          if (features[29] <= 11.00000000f) {
            values[0] = 0;
            values[1] = 6;
            values[2] = 5;
            values[3] = 10;
            values[4] = 2;
            values[5] = 1;
            values[6] = 15;
            values[7] = 0;
            values[8] = 4;
            values[9] = 0;
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 1;
            values[5] = 8;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        }
      }
    }
  } else {
    if (features[61] <= 0.50000000f) {
      if (features[25] <= 3.50000000f) {
        if (features[4] <= 14.50000000f) {
          if (features[14] <= 5.00000000f) {
            values[0] = 0;
            values[1] = 14;
            values[2] = 4;
            values[3] = 1;
            values[4] = 10;
            values[5] = 2;
            values[6] = 0;
            values[7] = 9;
            values[8] = 11;
            values[9] = 4;
          } else {
            values[0] = 0;
            values[1] = 2;
            values[2] = 0;
            values[3] = 1;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 27;
            values[8] = 2;
            values[9] = 3;
          }
        } else {
          if (features[19] <= 9.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 3;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 99;
            values[8] = 1;
            values[9] = 0;
          } else {
            values[0] = 0;
            values[1] = 3;
            values[2] = 0;
            values[3] = 3;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 2;
            values[9] = 0;
          }
        }
      } else {
        if (features[13] <= 6.50000000f) {
          if (features[43] <= 0.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 1;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 44;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        } else {
          if (features[36] <= 2.50000000f) {
            values[0] = 14;
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
            values[1] = 3;
            values[2] = 0;
            values[3] = 0;
            values[4] = 7;
            values[5] = 2;
            values[6] = 0;
            values[7] = 5;
            values[8] = 2;
            values[9] = 10;
          }
        }
      }
    } else {
      if (features[30] <= 2.50000000f) {
        if (features[44] <= 13.50000000f) {
          if (features[37] <= 4.50000000f) {
            values[0] = 0;
            values[1] = 3;
            values[2] = 58;
            values[3] = 9;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 45;
            values[9] = 1;
          } else {
            values[0] = 3;
            values[1] = 3;
            values[2] = 3;
            values[3] = 111;
            values[4] = 2;
            values[5] = 2;
            values[6] = 0;
            values[7] = 0;
            values[8] = 39;
            values[9] = 47;
          }
        } else {
          if (features[19] <= 9.50000000f) {
            values[0] = 0;
            values[1] = 3;
            values[2] = 23;
            values[3] = 8;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 14;
            values[9] = 0;
          } else {
            values[0] = 0;
            values[1] = 50;
            values[2] = 0;
            values[3] = 1;
            values[4] = 14;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 4;
            values[9] = 1;
          }
        }
      } else {
        if (features[36] <= 0.50000000f) {
          if (features[28] <= 5.50000000f) {
            values[0] = 112;
            values[1] = 0;
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
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 3;
            values[6] = 1;
            values[7] = 0;
            values[8] = 0;
            values[9] = 26;
          }
        } else {
          if (features[33] <= 3.00000000f) {
            values[0] = 1;
            values[1] = 4;
            values[2] = 3;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 8;
            values[9] = 48;
          } else {
            values[0] = 1;
            values[1] = 3;
            values[2] = 0;
            values[3] = 0;
            values[4] = 19;
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
            values[0] = 1;
            values[1] = 4;
            values[2] = 0;
            values[3] = 30;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
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
            values[7] = 14;
            values[8] = 6;
            values[9] = 0;
          }
        } else {
          if (features[46] <= 3.50000000f) {
            values[0] = 1;
            values[1] = 1;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 33;
            values[8] = 0;
            values[9] = 0;
          } else {
            values[0] = 2;
            values[1] = 8;
            values[2] = 0;
            values[3] = 8;
            values[4] = 2;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 1;
          }
        }
      } else {
        if (features[34] <= 3.00000000f) {
          if (features[46] <= 5.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 68;
            values[3] = 4;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 1;
            values[8] = 0;
            values[9] = 1;
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 3;
            values[3] = 12;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        } else {
          if (features[28] <= 4.50000000f) {
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
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 2;
            values[8] = 2;
            values[9] = 2;
          }
        }
      }
    } else {
      if (features[38] <= 1.50000000f) {
        if (features[42] <= 3.50000000f) {
          if (features[58] <= 11.50000000f) {
            values[0] = 0;
            values[1] = 40;
            values[2] = 0;
            values[3] = 18;
            values[4] = 1;
            values[5] = 7;
            values[6] = 0;
            values[7] = 1;
            values[8] = 16;
            values[9] = 24;
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 2;
            values[3] = 12;
            values[4] = 1;
            values[5] = 37;
            values[6] = 0;
            values[7] = 2;
            values[8] = 2;
            values[9] = 0;
          }
        } else {
          if (features[2] <= 12.00000000f) {
            values[0] = 0;
            values[1] = 17;
            values[2] = 9;
            values[3] = 1;
            values[4] = 0;
            values[5] = 1;
            values[6] = 0;
            values[7] = 1;
            values[8] = 62;
            values[9] = 2;
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 23;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 1;
            values[8] = 8;
            values[9] = 0;
          }
        }
      } else {
        if (features[18] <= 10.50000000f) {
          if (features[45] <= 8.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 5;
            values[8] = 0;
            values[9] = 6;
          } else {
            values[0] = 0;
            values[1] = 2;
            values[2] = 0;
            values[3] = 32;
            values[4] = 0;
            values[5] = 1;
            values[6] = 1;
            values[7] = 0;
            values[8] = 0;
            values[9] = 3;
          }
        } else {
          if (features[2] <= 11.00000000f) {
            values[0] = 0;
            values[1] = 4;
            values[2] = 0;
            values[3] = 1;
            values[4] = 0;
            values[5] = 7;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 60;
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 15;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 7;
          }
        }
      }
    }
  } else {
    if (features[61] <= 9.50000000f) {
      if (features[10] <= 5.50000000f) {
        if (features[37] <= 6.50000000f) {
          if (features[27] <= 15.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 2;
            values[5] = 0;
            values[6] = 2;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            values[0] = 0;
            values[1] = 22;
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
          if (features[42] <= 1.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 7;
            values[5] = 0;
            values[6] = 0;
            values[7] = 1;
            values[8] = 0;
            values[9] = 6;
          } else {
            values[0] = 2;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 95;
            values[5] = 0;
            values[6] = 1;
            values[7] = 3;
            values[8] = 2;
            values[9] = 1;
          }
        }
      } else {
        if (features[20] <= 6.50000000f) {
          if (features[13] <= 9.50000000f) {
            values[0] = 22;
            values[1] = 0;
            values[2] = 0;
            values[3] = 2;
            values[4] = 20;
            values[5] = 54;
            values[6] = 8;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            values[0] = 78;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 1;
            values[5] = 10;
            values[6] = 3;
            values[7] = 19;
            values[8] = 4;
            values[9] = 4;
          }
        } else {
          if (features[50] <= 8.50000000f) {
            values[0] = 0;
            values[1] = 4;
            values[2] = 0;
            values[3] = 3;
            values[4] = 4;
            values[5] = 0;
            values[6] = 1;
            values[7] = 45;
            values[8] = 0;
            values[9] = 0;
          } else {
            values[0] = 11;
            values[1] = 16;
            values[2] = 1;
            values[3] = 2;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 8;
            values[8] = 36;
            values[9] = 0;
          }
        }
      }
    } else {
      if (features[36] <= 2.50000000f) {
        if (features[21] <= 6.50000000f) {
          if (features[20] <= 9.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 3;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 5;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
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
        if (features[50] <= 2.00000000f) {
          if (features[5] <= 3.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 8;
          } else {
            values[0] = 0;
            values[1] = 12;
            values[2] = 0;
            values[3] = 0;
            values[4] = 2;
            values[5] = 1;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        } else {
          if (features[28] <= 8.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 2;
            values[4] = 1;
            values[5] = 0;
            values[6] = 92;
            values[7] = 0;
            values[8] = 1;
            values[9] = 0;
          } else {
            values[0] = 0;
            values[1] = 10;
            values[2] = 2;
            values[3] = 2;
            values[4] = 0;
            values[5] = 0;
            values[6] = 13;
            values[7] = 0;
            values[8] = 6;
            values[9] = 5;
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
            values[0] = 0;
            values[1] = 34;
            values[2] = 0;
            values[3] = 5;
            values[4] = 4;
            values[5] = 2;
            values[6] = 34;
            values[7] = 1;
            values[8] = 0;
            values[9] = 0;
          } else {
            values[0] = 0;
            values[1] = 5;
            values[2] = 58;
            values[3] = 8;
            values[4] = 0;
            values[5] = 2;
            values[6] = 2;
            values[7] = 4;
            values[8] = 3;
            values[9] = 0;
          }
        } else {
          if (features[58] <= 1.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 2;
            values[5] = 0;
            values[6] = 4;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            values[0] = 0;
            values[1] = 1;
            values[2] = 0;
            values[3] = 2;
            values[4] = 0;
            values[5] = 24;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        }
      } else {
        if (features[3] <= 5.50000000f) {
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
        } else {
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
        }
      }
    } else {
      if (features[60] <= 5.50000000f) {
        if (features[25] <= 1.50000000f) {
          if (features[51] <= 2.50000000f) {
            values[0] = 0;
            values[1] = 1;
            values[2] = 0;
            values[3] = 1;
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
            values[4] = 2;
            values[5] = 1;
            values[6] = 0;
            values[7] = 99;
            values[8] = 3;
            values[9] = 1;
          }
        } else {
          if (features[17] <= 7.50000000f) {
            values[0] = 0;
            values[1] = 1;
            values[2] = 2;
            values[3] = 0;
            values[4] = 0;
            values[5] = 7;
            values[6] = 0;
            values[7] = 11;
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
            values[8] = 1;
            values[9] = 7;
          }
        }
      } else {
        if (features[36] <= 4.50000000f) {
          if (features[27] <= 6.50000000f) {
            values[0] = 14;
            values[1] = 2;
            values[2] = 4;
            values[3] = 8;
            values[4] = 0;
            values[5] = 1;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 3;
          } else {
            values[0] = 6;
            values[1] = 2;
            values[2] = 1;
            values[3] = 0;
            values[4] = 0;
            values[5] = 2;
            values[6] = 0;
            values[7] = 0;
            values[8] = 2;
            values[9] = 74;
          }
        } else {
          if (features[35] <= 11.50000000f) {
            values[0] = 0;
            values[1] = 26;
            values[2] = 44;
            values[3] = 91;
            values[4] = 1;
            values[5] = 0;
            values[6] = 0;
            values[7] = 3;
            values[8] = 16;
            values[9] = 38;
          } else {
            values[0] = 0;
            values[1] = 36;
            values[2] = 27;
            values[3] = 18;
            values[4] = 3;
            values[5] = 0;
            values[6] = 0;
            values[7] = 7;
            values[8] = 101;
            values[9] = 9;
          }
        }
      }
    }
  } else {
    if (features[43] <= 5.50000000f) {
      if (features[28] <= 1.50000000f) {
        if (features[36] <= 4.00000000f) {
          values[0] = 111;
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
          values[6] = 5;
          values[7] = 0;
          values[8] = 0;
          values[9] = 0;
        }
      } else {
        if (features[54] <= 3.00000000f) {
          if (features[2] <= 1.50000000f) {
            values[0] = 0;
            values[1] = 8;
            values[2] = 0;
            values[3] = 0;
            values[4] = 8;
            values[5] = 2;
            values[6] = 0;
            values[7] = 2;
            values[8] = 2;
            values[9] = 1;
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 15;
            values[6] = 2;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        } else {
          if (features[30] <= 2.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 1;
            values[6] = 11;
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
      }
    } else {
      if (features[44] <= 10.50000000f) {
        if (features[61] <= 8.50000000f) {
          if (features[30] <= 1.00000000f) {
            values[0] = 0;
            values[1] = 5;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 7;
            values[6] = 0;
            values[7] = 0;
            values[8] = 1;
            values[9] = 0;
          } else {
            values[0] = 8;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 2;
            values[5] = 0;
            values[6] = 0;
            values[7] = 12;
            values[8] = 0;
            values[9] = 0;
          }
        } else {
          if (features[59] <= 3.00000000f) {
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
            values[6] = 42;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        }
      } else {
        if (features[62] <= 0.50000000f) {
          if (features[26] <= 4.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 6;
            values[8] = 0;
            values[9] = 0;
          } else {
            values[0] = 0;
            values[1] = 5;
            values[2] = 0;
            values[3] = 0;
            values[4] = 129;
            values[5] = 4;
            values[6] = 0;
            values[7] = 1;
            values[8] = 0;
            values[9] = 0;
          }
        } else {
          if (features[54] <= 8.50000000f) {
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
            values[5] = 0;
            values[6] = 6;
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

void predict(float features[N_FEATURES], int& output) {
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
