
#ifdef __SYNTHESIS__
  #include <hls_half.h>
#endif

#define N_FEATURES 64

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
              if (features[28] <= 10.50000000f) {
                if (features[5] <= 13.50000000f) {
                  if (features[10] <= 15.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 17;
                  } else {
                    if (features[50] <= 3.00000000f) {
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
                    }
                  }
                } else {
                  if (features[4] <= 10.00000000f) {
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
                  } else {
                    if (features[15] <= 1.00000000f) {
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
                      if (features[18] <= 13.00000000f) {
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
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 1;
                      }
                    }
                  }
                }
              } else {
                if (features[29] <= 13.50000000f) {
                  if (features[37] <= 12.50000000f) {
                    if (features[45] <= 10.50000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 11;
                    } else {
                      if (features[5] <= 9.00000000f) {
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
                    if (features[26] <= 5.50000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 11;
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
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 1;
                    }
                  }
                } else {
                  if (features[2] <= 11.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 64;
                  } else {
                    if (features[18] <= 3.50000000f) {
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
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 11;
                    }
                  }
                }
              }
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
            if (features[53] <= 10.50000000f) {
              if (features[62] <= 3.00000000f) {
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
                values[3] = 3;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
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
          if (features[50] <= 0.50000000f) {
            if (features[3] <= 10.00000000f) {
              if (features[35] <= 7.00000000f) {
                values[0] = 0;
                values[1] = 6;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              } else {
                if (features[25] <= 5.50000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 3;
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
            if (features[25] <= 1.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 52;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              if (features[35] <= 8.00000000f) {
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
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 2;
                values[9] = 0;
              }
            }
          }
        }
      }
    } else {
      if (features[38] <= 1.50000000f) {
        if (features[62] <= 2.00000000f) {
          if (features[36] <= 12.50000000f) {
            if (features[14] <= 2.00000000f) {
              if (features[35] <= 0.50000000f) {
                values[0] = 3;
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
                if (features[3] <= 13.00000000f) {
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
                  if (features[13] <= 9.00000000f) {
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
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 1;
                  }
                }
              }
            } else {
              values[0] = 0;
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
            if (features[35] <= 7.50000000f) {
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
            } else {
              if (features[44] <= 4.00000000f) {
                if (features[5] <= 3.50000000f) {
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
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 3;
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
                values[8] = 11;
                values[9] = 0;
              }
            }
          }
        } else {
          if (features[35] <= 6.50000000f) {
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
        }
      } else {
        if (features[13] <= 3.50000000f) {
          if (features[52] <= 8.50000000f) {
            if (features[61] <= 8.00000000f) {
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
              values[4] = 0;
              values[5] = 0;
              values[6] = 6;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[30] <= 9.00000000f) {
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
          if (features[35] <= 6.00000000f) {
            if (features[26] <= 3.00000000f) {
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
              if (features[28] <= 8.00000000f) {
                values[0] = 85;
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
                values[7] = 0;
                values[8] = 0;
                values[9] = 1;
              }
            }
          } else {
            if (features[5] <= 11.00000000f) {
              if (features[4] <= 13.50000000f) {
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
                values[9] = 3;
              }
            } else {
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
            }
          }
        }
      }
    }
  } else {
    if (features[61] <= 0.50000000f) {
      if (features[60] <= 8.50000000f) {
        if (features[26] <= 10.50000000f) {
          if (features[27] <= 12.50000000f) {
            if (features[50] <= 12.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 114;
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
            if (features[4] <= 4.00000000f) {
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
              if (features[30] <= 1.50000000f) {
                if (features[1] <= 1.00000000f) {
                  if (features[49] <= 2.50000000f) {
                    if (features[11] <= 15.50000000f) {
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
                  }
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
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 9;
                values[8] = 0;
                values[9] = 0;
              }
            }
          }
        } else {
          if (features[21] <= 0.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 37;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            if (features[4] <= 10.50000000f) {
              if (features[42] <= 0.50000000f) {
                if (features[12] <= 14.00000000f) {
                  if (features[27] <= 8.00000000f) {
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
                    if (features[36] <= 14.50000000f) {
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
              } else {
                if (features[18] <= 8.00000000f) {
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
                  values[4] = 20;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              }
            } else {
              if (features[10] <= 14.50000000f) {
                if (features[2] <= 1.00000000f) {
                  if (features[52] <= 7.50000000f) {
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
                    values[2] = 0;
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
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 10;
                  values[8] = 0;
                  values[9] = 0;
                }
              } else {
                if (features[50] <= 4.50000000f) {
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
            }
          }
        }
      } else {
        if (features[27] <= 10.50000000f) {
          if (features[36] <= 11.50000000f) {
            if (features[21] <= 1.00000000f) {
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
              if (features[14] <= 2.00000000f) {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 4;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              } else {
                if (features[53] <= 3.50000000f) {
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
                  values[5] = 0;
                  values[6] = 2;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              }
            }
          } else {
            if (features[26] <= 8.50000000f) {
              if (features[59] <= 15.50000000f) {
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
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 51;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        } else {
          if (features[42] <= 2.00000000f) {
            if (features[50] <= 3.00000000f) {
              if (features[51] <= 11.00000000f) {
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
              } else {
                values[0] = 0;
                values[1] = 5;
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
          } else {
            if (features[53] <= 2.00000000f) {
              if (features[19] <= 8.00000000f) {
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
                if (features[45] <= 4.00000000f) {
                  values[0] = 0;
                  values[1] = 21;
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
                  values[4] = 1;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              }
            } else {
              if (features[44] <= 13.00000000f) {
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
      }
    } else {
      if (features[21] <= 0.50000000f) {
        if (features[2] <= 6.50000000f) {
          if (features[20] <= 8.50000000f) {
            if (features[63] <= 6.50000000f) {
              if (features[62] <= 0.50000000f) {
                if (features[28] <= 1.50000000f) {
                  if (features[10] <= 4.00000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 6;
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
                    if (features[2] <= 3.50000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 9;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    } else {
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
                    }
                  }
                }
              } else {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 0;
                values[6] = 114;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
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
          } else {
            if (features[17] <= 2.50000000f) {
              if (features[2] <= 0.50000000f) {
                if (features[44] <= 13.00000000f) {
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
                if (features[27] <= 8.00000000f) {
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
            } else {
              if (features[42] <= 0.50000000f) {
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
              }
            }
          }
        } else {
          if (features[44] <= 10.00000000f) {
            if (features[2] <= 8.50000000f) {
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
              values[2] = 44;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[4] <= 12.50000000f) {
              if (features[9] <= 5.50000000f) {
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
          }
        }
      } else {
        if (features[19] <= 13.50000000f) {
          if (features[28] <= 1.50000000f) {
            if (features[44] <= 12.00000000f) {
              values[0] = 29;
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
              values[4] = 4;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[51] <= 13.50000000f) {
              if (features[1] <= 0.50000000f) {
                if (features[22] <= 12.00000000f) {
                  if (features[30] <= 8.50000000f) {
                    if (features[3] <= 5.00000000f) {
                      if (features[45] <= 2.50000000f) {
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
                        if (features[27] <= 8.00000000f) {
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
                          values[1] = 5;
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
                      if (features[58] <= 11.50000000f) {
                        if (features[21] <= 6.50000000f) {
                          if (features[37] <= 8.00000000f) {
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
                          if (features[26] <= 0.50000000f) {
                            if (features[10] <= 13.00000000f) {
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
                          } else {
                            values[0] = 0;
                            values[1] = 0;
                            values[2] = 0;
                            values[3] = 0;
                            values[4] = 0;
                            values[5] = 0;
                            values[6] = 0;
                            values[7] = 0;
                            values[8] = 82;
                            values[9] = 0;
                          }
                        }
                      } else {
                        if (features[21] <= 7.50000000f) {
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
                          if (features[5] <= 3.50000000f) {
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
                            if (features[35] <= 8.00000000f) {
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
                      }
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
                    values[9] = 2;
                  }
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
              } else {
                if (features[19] <= 6.50000000f) {
                  if (features[45] <= 7.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 11;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  } else {
                    if (features[59] <= 14.50000000f) {
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
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 3;
                  values[9] = 0;
                }
              }
            } else {
              if (features[38] <= 0.50000000f) {
                if (features[50] <= 0.50000000f) {
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
                  if (features[27] <= 14.00000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 74;
                    values[3] = 0;
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
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  }
                }
              } else {
                if (features[9] <= 3.50000000f) {
                  if (features[3] <= 11.00000000f) {
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
                    if (features[53] <= 11.50000000f) {
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
                  }
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
          }
        } else {
          if (features[37] <= 13.00000000f) {
            if (features[43] <= 11.50000000f) {
              if (features[42] <= 0.50000000f) {
                if (features[27] <= 4.50000000f) {
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
                  values[1] = 12;
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
                if (features[33] <= 4.00000000f) {
                  if (features[2] <= 15.00000000f) {
                    if (features[21] <= 6.00000000f) {
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
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 18;
                      values[9] = 0;
                    }
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
                  values[0] = 2;
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
              if (features[49] <= 4.00000000f) {
                if (features[45] <= 10.00000000f) {
                  if (features[51] <= 13.00000000f) {
                    if (features[51] <= 11.50000000f) {
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
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 1;
                      values[9] = 0;
                    }
                  } else {
                    values[0] = 0;
                    values[1] = 32;
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
                  if (features[61] <= 4.50000000f) {
                    if (features[35] <= 13.00000000f) {
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
                  } else {
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
                  }
                }
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
            if (features[51] <= 15.00000000f) {
              if (features[17] <= 1.00000000f) {
                if (features[5] <= 12.00000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 33;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                } else {
                  if (features[35] <= 12.50000000f) {
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
              values[0] = 4;
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
  }

  return argmax(10, values);
}

int predict_1(float features[]) {
  int values[10];
  
  if (features[34] <= 7.50000000f) {
    if (features[19] <= 14.50000000f) {
      if (features[51] <= 12.50000000f) {
        if (features[30] <= 1.50000000f) {
          if (features[35] <= 12.50000000f) {
            if (features[6] <= 2.50000000f) {
              if (features[54] <= 0.50000000f) {
                if (features[44] <= 12.50000000f) {
                  if (features[11] <= 13.50000000f) {
                    if (features[36] <= 14.50000000f) {
                      if (features[3] <= 13.50000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 0;
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 10;
                      } else {
                        if (features[5] <= 2.50000000f) {
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
                      values[3] = 2;
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
                    values[5] = 2;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  }
                } else {
                  if (features[34] <= 1.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 6;
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
                }
              } else {
                if (features[51] <= 0.50000000f) {
                  if (features[26] <= 7.50000000f) {
                    if (features[61] <= 11.00000000f) {
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
                    values[9] = 11;
                  }
                } else {
                  if (features[20] <= 4.50000000f) {
                    if (features[25] <= 1.50000000f) {
                      if (features[5] <= 7.50000000f) {
                        if (features[34] <= 0.50000000f) {
                          if (features[50] <= 9.00000000f) {
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
                          if (features[62] <= 6.50000000f) {
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
                          } else {
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
                          }
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
                        values[8] = 3;
                        values[9] = 0;
                      }
                    } else {
                      if (features[17] <= 3.50000000f) {
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
                        if (features[61] <= 15.50000000f) {
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
                      }
                    }
                  } else {
                    if (features[43] <= 3.00000000f) {
                      if (features[63] <= 1.50000000f) {
                        if (features[60] <= 5.50000000f) {
                          values[0] = 0;
                          values[1] = 0;
                          values[2] = 0;
                          values[3] = 0;
                          values[4] = 0;
                          values[5] = 0;
                          values[6] = 0;
                          values[7] = 0;
                          values[8] = 0;
                          values[9] = 3;
                        } else {
                          if (features[3] <= 6.00000000f) {
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
                          } else {
                            if (features[51] <= 1.50000000f) {
                              if (features[25] <= 3.50000000f) {
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
                            } else {
                              if (features[55] <= 1.50000000f) {
                                if (features[21] <= 15.50000000f) {
                                  if (features[20] <= 7.50000000f) {
                                    if (features[2] <= 5.50000000f) {
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
                                    } else {
                                      if (features[35] <= 5.00000000f) {
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
                                  } else {
                                    values[0] = 0;
                                    values[1] = 0;
                                    values[2] = 0;
                                    values[3] = 72;
                                    values[4] = 0;
                                    values[5] = 0;
                                    values[6] = 0;
                                    values[7] = 0;
                                    values[8] = 0;
                                    values[9] = 0;
                                  }
                                } else {
                                  if (features[13] <= 14.50000000f) {
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
                        }
                      } else {
                        if (features[20] <= 11.00000000f) {
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
                    } else {
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
                    }
                  }
                }
              }
            } else {
              if (features[50] <= 2.50000000f) {
                if (features[42] <= 1.50000000f) {
                  if (features[18] <= 7.00000000f) {
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
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 2;
                  values[8] = 0;
                  values[9] = 0;
                }
              } else {
                if (features[27] <= 11.50000000f) {
                  if (features[6] <= 5.00000000f) {
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
                    if (features[26] <= 5.50000000f) {
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
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 19;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              }
            }
          } else {
            if (features[43] <= 5.50000000f) {
              if (features[54] <= 0.50000000f) {
                if (features[1] <= 0.50000000f) {
                  if (features[35] <= 15.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
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
                    values[3] = 1;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  }
                } else {
                  if (features[44] <= 14.50000000f) {
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
                  } else {
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
                  }
                }
              } else {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 17;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
            } else {
              if (features[36] <= 9.50000000f) {
                if (features[26] <= 7.00000000f) {
                  if (features[5] <= 5.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 11;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  } else {
                    if (features[29] <= 0.50000000f) {
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
                      values[3] = 2;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  }
                } else {
                  if (features[3] <= 15.50000000f) {
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
                    if (features[13] <= 7.50000000f) {
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
                      values[5] = 1;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  }
                }
              } else {
                if (features[27] <= 5.50000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 3;
                  values[8] = 0;
                  values[9] = 0;
                } else {
                  if (features[18] <= 2.00000000f) {
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
                  } else {
                    if (features[25] <= 4.50000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 30;
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
            }
          }
        } else {
          if (features[20] <= 0.50000000f) {
            if (features[10] <= 10.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 10;
              values[8] = 0;
              values[9] = 0;
            } else {
              if (features[29] <= 12.50000000f) {
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
            }
          } else {
            if (features[58] <= 10.50000000f) {
              if (features[33] <= 1.50000000f) {
                if (features[51] <= 1.50000000f) {
                  if (features[61] <= 10.00000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 6;
                  } else {
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
                  values[9] = 51;
                }
              } else {
                if (features[33] <= 3.50000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 3;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                } else {
                  values[0] = 4;
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
              if (features[6] <= 1.50000000f) {
                if (features[26] <= 7.00000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 6;
                  values[9] = 0;
                } else {
                  if (features[43] <= 8.00000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 6;
                  } else {
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
                  }
                }
              } else {
                values[0] = 0;
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
            }
          }
        }
      } else {
        if (features[61] <= 1.50000000f) {
          if (features[1] <= 0.50000000f) {
            if (features[52] <= 9.50000000f) {
              if (features[17] <= 5.00000000f) {
                if (features[59] <= 15.50000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 31;
                  values[8] = 0;
                  values[9] = 0;
                } else {
                  if (features[27] <= 8.50000000f) {
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
              } else {
                if (features[12] <= 3.50000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 2;
                  values[9] = 0;
                } else {
                  if (features[5] <= 11.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 3;
                  } else {
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
                  }
                }
              }
            } else {
              if (features[2] <= 9.00000000f) {
                if (features[37] <= 8.50000000f) {
                  if (features[19] <= 6.00000000f) {
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
                    values[0] = 0;
                    values[1] = 5;
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
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 4;
                  values[8] = 0;
                  values[9] = 0;
                }
              } else {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 4;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
            }
          } else {
            if (features[20] <= 9.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 18;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              if (features[12] <= 13.00000000f) {
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
              } else {
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
              }
            }
          }
        } else {
          if (features[45] <= 10.50000000f) {
            if (features[53] <= 3.50000000f) {
              if (features[44] <= 8.50000000f) {
                values[0] = 0;
                values[1] = 0;
                values[2] = 4;
                values[3] = 0;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              } else {
                values[0] = 0;
                values[1] = 7;
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
                if (features[35] <= 15.50000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 97;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                } else {
                  if (features[44] <= 11.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 12;
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
                    values[7] = 0;
                    values[8] = 2;
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
                values[6] = 0;
                values[7] = 0;
                values[8] = 2;
                values[9] = 0;
              }
            }
          } else {
            if (features[20] <= 12.00000000f) {
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
            } else {
              if (features[34] <= 1.50000000f) {
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
        }
      }
    } else {
      if (features[41] <= 0.50000000f) {
        if (features[46] <= 5.50000000f) {
          if (features[58] <= 4.50000000f) {
            if (features[6] <= 6.50000000f) {
              values[0] = 0;
              values[1] = 68;
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
              values[7] = 0;
              values[8] = 0;
              values[9] = 2;
            }
          } else {
            if (features[3] <= 12.50000000f) {
              if (features[14] <= 4.50000000f) {
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
            } else {
              if (features[10] <= 15.00000000f) {
                if (features[42] <= 12.50000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 2;
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
                if (features[35] <= 9.00000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 4;
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
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 1;
                }
              }
            }
          }
        } else {
          if (features[35] <= 4.00000000f) {
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
          } else {
            if (features[12] <= 10.00000000f) {
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
        if (features[13] <= 15.50000000f) {
          if (features[52] <= 10.50000000f) {
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
            if (features[34] <= 3.50000000f) {
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
            } else {
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
            }
          }
        } else {
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
        }
      }
    }
  } else {
    if (features[44] <= 6.50000000f) {
      if (features[21] <= 3.00000000f) {
        if (features[58] <= 6.50000000f) {
          if (features[50] <= 1.50000000f) {
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
          } else {
            if (features[61] <= 3.00000000f) {
              if (features[2] <= 1.50000000f) {
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
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 71;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        } else {
          if (features[62] <= 0.50000000f) {
            if (features[10] <= 11.50000000f) {
              if (features[10] <= 10.00000000f) {
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
                values[5] = 0;
                values[6] = 0;
                values[7] = 1;
                values[8] = 0;
                values[9] = 0;
              }
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 17;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[37] <= 8.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 10;
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
        }
      } else {
        if (features[36] <= 0.50000000f) {
          if (features[50] <= 5.50000000f) {
            if (features[30] <= 6.00000000f) {
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
            } else {
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
            }
          } else {
            if (features[28] <= 4.50000000f) {
              values[0] = 126;
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
              values[7] = 0;
              values[8] = 3;
              values[9] = 0;
            }
          }
        } else {
          if (features[20] <= 11.00000000f) {
            if (features[50] <= 7.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 13;
            } else {
              if (features[42] <= 6.00000000f) {
                if (features[58] <= 10.00000000f) {
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
            }
          } else {
            if (features[13] <= 4.50000000f) {
              if (features[41] <= 4.00000000f) {
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
              }
            } else {
              if (features[36] <= 9.50000000f) {
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
              } else {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 10;
                values[8] = 0;
                values[9] = 0;
              }
            }
          }
        }
      }
    } else {
      if (features[19] <= 4.50000000f) {
        if (features[25] <= 0.50000000f) {
          if (features[21] <= 1.50000000f) {
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
            if (features[61] <= 6.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 56;
              values[8] = 0;
              values[9] = 0;
            } else {
              if (features[36] <= 12.50000000f) {
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
        } else {
          if (features[59] <= 14.50000000f) {
            if (features[33] <= 1.50000000f) {
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
            } else {
              if (features[42] <= 13.00000000f) {
                if (features[60] <= 8.00000000f) {
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
                  if (features[2] <= 4.00000000f) {
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
                    values[5] = 2;
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
                values[6] = 3;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
            }
          } else {
            if (features[13] <= 13.00000000f) {
              if (features[10] <= 15.50000000f) {
                if (features[4] <= 11.50000000f) {
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
                }
              } else {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 16;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
            } else {
              if (features[44] <= 10.50000000f) {
                values[0] = 4;
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
                values[7] = 0;
                values[8] = 2;
                values[9] = 0;
              }
            }
          }
        }
      } else {
        if (features[29] <= 2.50000000f) {
          if (features[14] <= 0.50000000f) {
            if (features[45] <= 2.50000000f) {
              if (features[36] <= 7.50000000f) {
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
                values[1] = 19;
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
              if (features[27] <= 15.00000000f) {
                if (features[61] <= 7.00000000f) {
                  if (features[2] <= 6.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 5;
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
                    values[5] = 1;
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
                  values[6] = 31;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              } else {
                if (features[60] <= 15.50000000f) {
                  if (features[36] <= 14.00000000f) {
                    if (features[5] <= 6.50000000f) {
                      if (features[29] <= 1.00000000f) {
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
                        values[8] = 1;
                        values[9] = 0;
                      }
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
                    values[5] = 2;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  }
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
            }
          } else {
            if (features[25] <= 4.00000000f) {
              if (features[7] <= 1.50000000f) {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 10;
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
          if (features[27] <= 15.50000000f) {
            if (features[58] <= 5.50000000f) {
              if (features[36] <= 3.50000000f) {
                if (features[41] <= 5.50000000f) {
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
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 8;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              } else {
                if (features[13] <= 12.50000000f) {
                  if (features[33] <= 0.50000000f) {
                    if (features[3] <= 4.50000000f) {
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
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 99;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  }
                } else {
                  if (features[51] <= 8.00000000f) {
                    if (features[27] <= 9.50000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 4;
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
                    values[8] = 2;
                    values[9] = 0;
                  }
                }
              }
            } else {
              if (features[43] <= 11.00000000f) {
                if (features[35] <= 7.00000000f) {
                  values[0] = 2;
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
                  if (features[37] <= 8.00000000f) {
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
                    values[4] = 0;
                    values[5] = 1;
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
                values[6] = 0;
                values[7] = 5;
                values[8] = 0;
                values[9] = 0;
              }
            }
          } else {
            if (features[51] <= 10.00000000f) {
              if (features[59] <= 6.50000000f) {
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
              } else {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 12;
                values[9] = 0;
              }
            } else {
              if (features[6] <= 8.50000000f) {
                if (features[44] <= 9.50000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 4;
                  values[8] = 0;
                  values[9] = 0;
                } else {
                  if (features[45] <= 13.50000000f) {
                    if (features[10] <= 3.50000000f) {
                      if (features[5] <= 4.00000000f) {
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
                    } else {
                      values[0] = 0;
                      values[1] = 13;
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
                  }
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
      }
    }
  }

  return argmax(10, values);
}

int predict_2(float features[]) {
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
              if (features[19] <= 13.00000000f) {
                if (features[51] <= 1.00000000f) {
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
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 1;
                  values[8] = 0;
                  values[9] = 0;
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
            if (features[45] <= 7.00000000f) {
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
            if (features[41] <= 0.50000000f) {
              if (features[29] <= 8.00000000f) {
                if (features[27] <= 9.50000000f) {
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
                if (features[43] <= 15.50000000f) {
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
                } else {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 3;
                  values[8] = 0;
                  values[9] = 0;
                }
              }
            } else {
              if (features[4] <= 13.50000000f) {
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
                values[2] = 0;
                values[3] = 0;
                values[4] = 8;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
            }
          } else {
            if (features[60] <= 12.00000000f) {
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
      if (features[20] <= 2.50000000f) {
        if (features[42] <= 5.50000000f) {
          if (features[20] <= 0.50000000f) {
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
        } else {
          if (features[38] <= 9.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 98;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            if (features[35] <= 10.50000000f) {
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
      } else {
        if (features[27] <= 13.50000000f) {
          if (features[58] <= 0.50000000f) {
            if (features[30] <= 1.00000000f) {
              if (features[27] <= 10.00000000f) {
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
                values[4] = 0;
                values[5] = 0;
                values[6] = 2;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
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
          } else {
            if (features[2] <= 2.00000000f) {
              if (features[33] <= 2.50000000f) {
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
              if (features[33] <= 0.50000000f) {
                values[0] = 0;
                values[1] = 0;
                values[2] = 45;
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
                values[5] = 1;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
            }
          }
        } else {
          if (features[59] <= 12.50000000f) {
            if (features[50] <= 11.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 11;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              if (features[46] <= 3.50000000f) {
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
            if (features[1] <= 1.50000000f) {
              if (features[45] <= 9.00000000f) {
                if (features[4] <= 11.00000000f) {
                  values[0] = 0;
                  values[1] = 11;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                } else {
                  if (features[51] <= 9.50000000f) {
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
                  } else {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 2;
                    values[9] = 0;
                  }
                }
              } else {
                if (features[34] <= 13.50000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 9;
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
              }
            } else {
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
            }
          }
        }
      }
    }
  } else {
    if (features[53] <= 0.50000000f) {
      if (features[60] <= 8.50000000f) {
        if (features[38] <= 1.50000000f) {
          if (features[18] <= 14.50000000f) {
            if (features[25] <= 3.50000000f) {
              if (features[12] <= 6.50000000f) {
                if (features[42] <= 2.50000000f) {
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
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 4;
                  values[9] = 0;
                }
              } else {
                if (features[37] <= 0.50000000f) {
                  if (features[21] <= 13.00000000f) {
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
                } else {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 27;
                  values[8] = 0;
                  values[9] = 0;
                }
              }
            } else {
              if (features[18] <= 10.50000000f) {
                if (features[52] <= 4.50000000f) {
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
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 2;
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
                values[9] = 5;
              }
            }
          } else {
            if (features[29] <= 3.50000000f) {
              if (features[43] <= 14.50000000f) {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 2;
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
              if (features[14] <= 9.50000000f) {
                if (features[13] <= 15.00000000f) {
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
              } else {
                if (features[2] <= 3.00000000f) {
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
            }
          }
        } else {
          if (features[18] <= 12.50000000f) {
            if (features[30] <= 0.50000000f) {
              if (features[34] <= 12.50000000f) {
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
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 83;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[12] <= 5.00000000f) {
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
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 10;
              values[8] = 0;
              values[9] = 0;
            }
          }
        }
      } else {
        if (features[38] <= 0.50000000f) {
          if (features[19] <= 8.00000000f) {
            if (features[4] <= 11.50000000f) {
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
              if (features[52] <= 11.00000000f) {
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
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 4;
              }
            }
          } else {
            values[0] = 0;
            values[1] = 24;
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
          if (features[33] <= 3.00000000f) {
            if (features[14] <= 6.50000000f) {
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
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 21;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        }
      }
    } else {
      if (features[33] <= 2.50000000f) {
        if (features[34] <= 0.50000000f) {
          if (features[45] <= 6.50000000f) {
            if (features[58] <= 3.50000000f) {
              if (features[27] <= 4.50000000f) {
                if (features[26] <= 1.50000000f) {
                  if (features[46] <= 6.00000000f) {
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
                  values[2] = 4;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              } else {
                if (features[38] <= 2.00000000f) {
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
                  if (features[18] <= 4.00000000f) {
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
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 4;
                  }
                }
              }
            } else {
              if (features[51] <= 7.50000000f) {
                if (features[52] <= 4.50000000f) {
                  if (features[35] <= 8.00000000f) {
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
                  values[3] = 2;
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
                values[2] = 59;
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
            if (features[59] <= 5.00000000f) {
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
            } else {
              if (features[5] <= 0.50000000f) {
                if (features[21] <= 5.50000000f) {
                  if (features[42] <= 2.00000000f) {
                    if (features[18] <= 3.50000000f) {
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
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 16;
                }
              } else {
                if (features[42] <= 0.50000000f) {
                  if (features[58] <= 10.50000000f) {
                    if (features[35] <= 0.50000000f) {
                      if (features[30] <= 0.50000000f) {
                        if (features[21] <= 14.50000000f) {
                          values[0] = 0;
                          values[1] = 0;
                          values[2] = 0;
                          values[3] = 7;
                          values[4] = 0;
                          values[5] = 0;
                          values[6] = 0;
                          values[7] = 0;
                          values[8] = 0;
                          values[9] = 0;
                        } else {
                          if (features[3] <= 15.00000000f) {
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
                            values[2] = 1;
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
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 14;
                      }
                    } else {
                      if (features[4] <= 15.50000000f) {
                        if (features[29] <= 13.00000000f) {
                          values[0] = 0;
                          values[1] = 0;
                          values[2] = 0;
                          values[3] = 10;
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
                          values[7] = 0;
                          values[8] = 0;
                          values[9] = 5;
                        }
                      } else {
                        if (features[26] <= 5.00000000f) {
                          values[0] = 0;
                          values[1] = 0;
                          values[2] = 0;
                          values[3] = 23;
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
                          values[7] = 0;
                          values[8] = 1;
                          values[9] = 0;
                        }
                      }
                    }
                  } else {
                    if (features[18] <= 12.50000000f) {
                      if (features[3] <= 15.50000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 24;
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 0;
                      } else {
                        if (features[28] <= 6.50000000f) {
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
                          values[0] = 0;
                          values[1] = 0;
                          values[2] = 0;
                          values[3] = 24;
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
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 3;
                    }
                  }
                } else {
                  if (features[29] <= 14.00000000f) {
                    if (features[35] <= 10.50000000f) {
                      if (features[44] <= 5.50000000f) {
                        if (features[50] <= 10.00000000f) {
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
                          values[3] = 14;
                          values[4] = 0;
                          values[5] = 0;
                          values[6] = 0;
                          values[7] = 0;
                          values[8] = 0;
                          values[9] = 0;
                        }
                      } else {
                        if (features[21] <= 11.00000000f) {
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
                        } else {
                          if (features[5] <= 8.50000000f) {
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
                            values[2] = 1;
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
                      if (features[53] <= 13.50000000f) {
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
                        if (features[12] <= 14.00000000f) {
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
                          values[2] = 1;
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
                    if (features[51] <= 13.00000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 10;
                    } else {
                      if (features[27] <= 8.00000000f) {
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
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          if (features[44] <= 2.50000000f) {
            if (features[46] <= 0.50000000f) {
              if (features[4] <= 9.00000000f) {
                if (features[42] <= 8.00000000f) {
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
                } else {
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
                }
              } else {
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
              }
            } else {
              if (features[37] <= 7.50000000f) {
                if (features[34] <= 9.00000000f) {
                  if (features[3] <= 10.00000000f) {
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
              } else {
                if (features[42] <= 9.50000000f) {
                  if (features[58] <= 14.50000000f) {
                    if (features[1] <= 1.50000000f) {
                      if (features[35] <= 1.50000000f) {
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
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 40;
                      }
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
                    values[3] = 2;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  }
                } else {
                  if (features[41] <= 2.50000000f) {
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
            }
          } else {
            if (features[20] <= 14.50000000f) {
              if (features[43] <= 0.50000000f) {
                if (features[60] <= 7.00000000f) {
                  if (features[26] <= 8.50000000f) {
                    if (features[5] <= 9.50000000f) {
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
                    values[5] = 2;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  }
                } else {
                  if (features[11] <= 10.00000000f) {
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
                    if (features[21] <= 8.50000000f) {
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
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 16;
                    }
                  }
                }
              } else {
                if (features[21] <= 5.00000000f) {
                  if (features[27] <= 8.50000000f) {
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
                    if (features[18] <= 9.00000000f) {
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
                      if (features[58] <= 9.00000000f) {
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
                      } else {
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
                      }
                    }
                  }
                } else {
                  if (features[35] <= 7.50000000f) {
                    values[0] = 3;
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
                    if (features[12] <= 15.50000000f) {
                      if (features[27] <= 1.50000000f) {
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
                        if (features[20] <= 13.50000000f) {
                          if (features[37] <= 12.50000000f) {
                            if (features[50] <= 2.00000000f) {
                              if (features[35] <= 14.50000000f) {
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
                            } else {
                              values[0] = 0;
                              values[1] = 0;
                              values[2] = 0;
                              values[3] = 0;
                              values[4] = 0;
                              values[5] = 0;
                              values[6] = 0;
                              values[7] = 0;
                              values[8] = 71;
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
                        } else {
                          if (features[50] <= 6.50000000f) {
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
                            if (features[41] <= 0.50000000f) {
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
                            }
                          }
                        }
                      }
                    } else {
                      if (features[42] <= 7.00000000f) {
                        if (features[25] <= 2.50000000f) {
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
                      } else {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 0;
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 6;
                        values[9] = 0;
                      }
                    }
                  }
                }
              }
            } else {
              if (features[58] <= 5.00000000f) {
                if (features[11] <= 9.50000000f) {
                  if (features[11] <= 6.50000000f) {
                    values[0] = 0;
                    values[1] = 5;
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
                    values[4] = 1;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  }
                } else {
                  values[0] = 0;
                  values[1] = 21;
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
                if (features[34] <= 11.50000000f) {
                  if (features[18] <= 10.50000000f) {
                    if (features[4] <= 13.00000000f) {
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
                    } else {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 14;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  } else {
                    if (features[21] <= 5.00000000f) {
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
                      if (features[3] <= 11.00000000f) {
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
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 3;
                        values[9] = 0;
                      }
                    }
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
                  values[8] = 6;
                  values[9] = 0;
                }
              }
            }
          }
        }
      } else {
        if (features[50] <= 5.50000000f) {
          if (features[19] <= 4.50000000f) {
            if (features[4] <= 15.50000000f) {
              if (features[6] <= 0.50000000f) {
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
                values[6] = 0;
                values[7] = 4;
                values[8] = 0;
                values[9] = 0;
              }
            } else {
              values[0] = 0;
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
            if (features[13] <= 6.50000000f) {
              if (features[53] <= 14.50000000f) {
                if (features[45] <= 4.00000000f) {
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
                } else {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 41;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              } else {
                if (features[46] <= 3.00000000f) {
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
                  values[6] = 1;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              }
            } else {
              if (features[61] <= 11.00000000f) {
                if (features[60] <= 11.00000000f) {
                  if (features[28] <= 9.50000000f) {
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
                    values[9] = 3;
                  }
                } else {
                  if (features[20] <= 10.00000000f) {
                    values[0] = 2;
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
                    if (features[44] <= 13.50000000f) {
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
                }
              } else {
                values[0] = 0;
                values[1] = 6;
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
          if (features[28] <= 5.00000000f) {
            if (features[13] <= 3.50000000f) {
              if (features[19] <= 10.00000000f) {
                values[0] = 2;
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
                values[4] = 8;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
            } else {
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
            }
          } else {
            if (features[42] <= 14.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 2;
              values[9] = 0;
            } else {
              if (features[35] <= 8.00000000f) {
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
        }
      }
    }
  }

  return argmax(10, values);
}

int predict_3(float features[]) {
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
              if (features[42] <= 9.00000000f) {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 30;
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
                values[9] = 0;
              }
            }
          } else {
            if (features[45] <= 13.50000000f) {
              if (features[53] <= 1.00000000f) {
                if (features[60] <= 9.50000000f) {
                  values[0] = 0;
                  values[1] = 0;
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
                values[0] = 0;
                values[1] = 0;
                values[2] = 25;
                values[3] = 0;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
            } else {
              if (features[26] <= 10.50000000f) {
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
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 6;
                values[9] = 0;
              }
            }
          }
        } else {
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
            if (features[3] <= 5.00000000f) {
              if (features[33] <= 7.00000000f) {
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
            } else {
              if (features[54] <= 3.00000000f) {
                if (features[26] <= 11.00000000f) {
                  values[0] = 3;
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
                  values[4] = 1;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              } else {
                if (features[61] <= 15.50000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 8;
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
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 1;
                }
              }
            }
          }
        }
      } else {
        if (features[43] <= 1.50000000f) {
          if (features[20] <= 2.00000000f) {
            if (features[58] <= 9.50000000f) {
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
              if (features[25] <= 1.50000000f) {
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
          } else {
            if (features[34] <= 2.50000000f) {
              if (features[14] <= 4.00000000f) {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 12;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              } else {
                if (features[14] <= 6.00000000f) {
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
        } else {
          if (features[60] <= 5.00000000f) {
            if (features[37] <= 1.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 2;
              values[9] = 0;
            } else {
              if (features[18] <= 2.00000000f) {
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
            if (features[14] <= 5.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 68;
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
          }
        }
      }
    } else {
      if (features[29] <= 14.50000000f) {
        if (features[10] <= 8.50000000f) {
          if (features[52] <= 6.00000000f) {
            if (features[61] <= 4.50000000f) {
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
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 12;
              values[9] = 0;
            }
          } else {
            if (features[46] <= 2.00000000f) {
              if (features[36] <= 5.00000000f) {
                if (features[38] <= 3.00000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
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
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 2;
                }
              } else {
                if (features[9] <= 1.50000000f) {
                  values[0] = 0;
                  values[1] = 51;
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
                  values[3] = 2;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              }
            } else {
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
          }
        } else {
          if (features[26] <= 4.50000000f) {
            if (features[19] <= 5.50000000f) {
              if (features[5] <= 3.00000000f) {
                if (features[35] <= 15.50000000f) {
                  if (features[1] <= 2.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 7;
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
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 2;
                  }
                } else {
                  values[0] = 0;
                  values[1] = 0;
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
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 35;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
            } else {
              if (features[37] <= 0.50000000f) {
                if (features[21] <= 6.00000000f) {
                  if (features[36] <= 14.00000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 26;
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
                    values[5] = 1;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  }
                } else {
                  if (features[51] <= 6.00000000f) {
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
                if (features[38] <= 0.50000000f) {
                  if (features[10] <= 10.00000000f) {
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
                  } else {
                    if (features[34] <= 0.50000000f) {
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
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 15;
                      values[9] = 0;
                    }
                  }
                } else {
                  if (features[12] <= 13.50000000f) {
                    if (features[46] <= 5.00000000f) {
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
                    values[3] = 7;
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
            if (features[58] <= 9.50000000f) {
              if (features[43] <= 2.50000000f) {
                if (features[19] <= 1.50000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 13;
                } else {
                  if (features[17] <= 2.50000000f) {
                    if (features[35] <= 6.00000000f) {
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
                    } else {
                      if (features[58] <= 7.00000000f) {
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
                  } else {
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
                  }
                }
              } else {
                if (features[61] <= 0.50000000f) {
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
                  if (features[61] <= 14.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 41;
                    values[9] = 0;
                  } else {
                    if (features[51] <= 13.00000000f) {
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
                  }
                }
              }
            } else {
              if (features[10] <= 15.50000000f) {
                if (features[51] <= 0.50000000f) {
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
                  if (features[12] <= 10.00000000f) {
                    if (features[17] <= 2.50000000f) {
                      if (features[30] <= 1.50000000f) {
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
                      } else {
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
                      }
                    } else {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 13;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  } else {
                    if (features[51] <= 7.50000000f) {
                      if (features[21] <= 1.50000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 0;
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
                        values[3] = 3;
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 0;
                      }
                    } else {
                      if (features[37] <= 7.00000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
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
                }
              } else {
                if (features[4] <= 4.00000000f) {
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
                } else {
                  if (features[17] <= 14.50000000f) {
                    if (features[51] <= 2.00000000f) {
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
                    } else {
                      if (features[20] <= 11.00000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 0;
                        values[4] = 0;
                        values[5] = 46;
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
            }
          }
        }
      } else {
        if (features[19] <= 14.50000000f) {
          if (features[44] <= 7.50000000f) {
            if (features[37] <= 0.50000000f) {
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
              if (features[18] <= 3.50000000f) {
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
                if (features[3] <= 6.50000000f) {
                  if (features[25] <= 1.00000000f) {
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
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 59;
                }
              }
            }
          } else {
            if (features[54] <= 5.00000000f) {
              if (features[3] <= 15.50000000f) {
                if (features[30] <= 4.50000000f) {
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
                  if (features[2] <= 1.50000000f) {
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
                if (features[57] <= 0.50000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
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
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 2;
              values[9] = 0;
            }
          }
        } else {
          if (features[44] <= 10.50000000f) {
            if (features[9] <= 0.50000000f) {
              if (features[21] <= 13.50000000f) {
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
              } else {
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
              values[9] = 3;
            }
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
    }
  } else {
    if (features[35] <= 4.50000000f) {
      if (features[58] <= 0.50000000f) {
        if (features[54] <= 0.50000000f) {
          if (features[53] <= 13.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 25;
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
          if (features[26] <= 15.50000000f) {
            if (features[21] <= 8.00000000f) {
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
      } else {
        if (features[18] <= 8.50000000f) {
          if (features[59] <= 8.00000000f) {
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
            if (features[25] <= 6.00000000f) {
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
            } else {
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
            }
          }
        } else {
          if (features[21] <= 1.00000000f) {
            if (features[54] <= 3.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
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
              values[6] = 1;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            values[0] = 102;
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
        if (features[37] <= 11.50000000f) {
          if (features[21] <= 0.50000000f) {
            if (features[2] <= 3.50000000f) {
              if (features[28] <= 5.50000000f) {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 0;
                values[6] = 18;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              } else {
                if (features[9] <= 0.50000000f) {
                  values[0] = 0;
                  values[1] = 5;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                } else {
                  if (features[3] <= 9.50000000f) {
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
                    values[5] = 2;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  }
                }
              }
            } else {
              if (features[5] <= 2.50000000f) {
                if (features[59] <= 15.50000000f) {
                  if (features[20] <= 6.50000000f) {
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
                } else {
                  if (features[37] <= 3.00000000f) {
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
              } else {
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
              }
            }
          } else {
            if (features[19] <= 15.50000000f) {
              if (features[50] <= 8.50000000f) {
                if (features[43] <= 6.50000000f) {
                  if (features[29] <= 12.50000000f) {
                    if (features[28] <= 13.00000000f) {
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
                      values[1] = 6;
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
                    if (features[30] <= 4.50000000f) {
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
                    } else {
                      if (features[44] <= 7.00000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 0;
                        values[4] = 0;
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
                        values[6] = 0;
                        values[7] = 1;
                        values[8] = 0;
                        values[9] = 0;
                      }
                    }
                  }
                } else {
                  if (features[58] <= 2.00000000f) {
                    if (features[29] <= 11.50000000f) {
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
                    if (features[30] <= 3.50000000f) {
                      if (features[22] <= 3.00000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
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
                        values[2] = 0;
                        values[3] = 0;
                        values[4] = 1;
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
                      values[7] = 16;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  }
                }
              } else {
                if (features[60] <= 1.00000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 7;
                  values[8] = 0;
                  values[9] = 0;
                } else {
                  if (features[58] <= 12.50000000f) {
                    if (features[5] <= 1.50000000f) {
                      if (features[34] <= 13.50000000f) {
                        if (features[5] <= 0.50000000f) {
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
                          if (features[18] <= 10.50000000f) {
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
                            values[8] = 1;
                            values[9] = 0;
                          }
                        }
                      } else {
                        values[0] = 2;
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
                      if (features[28] <= 3.00000000f) {
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
                        values[8] = 41;
                        values[9] = 0;
                      }
                    }
                  } else {
                    if (features[41] <= 2.00000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 2;
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
                  }
                }
              }
            } else {
              if (features[45] <= 11.50000000f) {
                if (features[26] <= 2.50000000f) {
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
                  if (features[58] <= 15.00000000f) {
                    values[0] = 0;
                    values[1] = 42;
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
                    values[7] = 0;
                    values[8] = 1;
                    values[9] = 0;
                  }
                }
              } else {
                if (features[37] <= 7.00000000f) {
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
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 2;
                  values[9] = 0;
                }
              }
            }
          }
        } else {
          if (features[19] <= 3.50000000f) {
            if (features[36] <= 13.50000000f) {
              if (features[14] <= 0.50000000f) {
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
            } else {
              if (features[57] <= 1.00000000f) {
                if (features[12] <= 2.00000000f) {
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
                  values[6] = 0;
                  values[7] = 46;
                  values[8] = 0;
                  values[9] = 0;
                }
              } else {
                if (features[26] <= 0.50000000f) {
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
            if (features[25] <= 0.50000000f) {
              if (features[61] <= 2.50000000f) {
                if (features[52] <= 9.50000000f) {
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
              } else {
                if (features[4] <= 12.50000000f) {
                  if (features[46] <= 2.50000000f) {
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
                    if (features[50] <= 7.00000000f) {
                      if (features[19] <= 14.00000000f) {
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
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 1;
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 0;
                      }
                    } else {
                      values[0] = 3;
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
                  values[4] = 7;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              }
            } else {
              if (features[3] <= 13.50000000f) {
                if (features[15] <= 1.50000000f) {
                  if (features[53] <= 14.50000000f) {
                    if (features[41] <= 0.50000000f) {
                      if (features[14] <= 5.00000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 0;
                        values[4] = 12;
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
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 1;
                      }
                    } else {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 64;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  } else {
                    if (features[28] <= 14.50000000f) {
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
                  if (features[15] <= 4.50000000f) {
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
                    values[4] = 4;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  }
                }
              } else {
                if (features[13] <= 2.00000000f) {
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
                } else {
                  if (features[36] <= 6.00000000f) {
                    values[0] = 4;
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
                    if (features[54] <= 7.00000000f) {
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
              }
            }
          }
        }
      } else {
        if (features[43] <= 0.50000000f) {
          if (features[20] <= 2.50000000f) {
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
            if (features[52] <= 5.50000000f) {
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
        } else {
          if (features[37] <= 2.50000000f) {
            if (features[2] <= 4.00000000f) {
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
              values[0] = 2;
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
            if (features[54] <= 10.50000000f) {
              if (features[52] <= 13.50000000f) {
                if (features[18] <= 8.50000000f) {
                  if (features[13] <= 7.00000000f) {
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
                } else {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 25;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
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
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 65;
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

int predict_4(float features[]) {
  int values[10];
  
  if (features[33] <= 3.50000000f) {
    if (features[21] <= 2.50000000f) {
      if (features[6] <= 0.50000000f) {
        if (features[5] <= 3.50000000f) {
          if (features[10] <= 12.50000000f) {
            if (features[34] <= 13.50000000f) {
              if (features[46] <= 5.00000000f) {
                if (features[52] <= 4.00000000f) {
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
                  if (features[3] <= 6.50000000f) {
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
                    if (features[33] <= 1.00000000f) {
                      values[0] = 0;
                      values[1] = 34;
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
                      values[4] = 1;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  }
                }
              } else {
                if (features[10] <= 7.50000000f) {
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
                } else {
                  if (features[35] <= 8.00000000f) {
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
                }
              }
            } else {
              if (features[62] <= 0.50000000f) {
                if (features[45] <= 15.50000000f) {
                  if (features[50] <= 12.00000000f) {
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
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 1;
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
                  values[4] = 2;
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
                values[6] = 24;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
            }
          } else {
            if (features[37] <= 0.50000000f) {
              if (features[9] <= 2.50000000f) {
                if (features[18] <= 13.50000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 4;
                  values[3] = 0;
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
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              } else {
                values[0] = 0;
                values[1] = 0;
                values[2] = 52;
                values[3] = 0;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
            } else {
              if (features[46] <= 4.50000000f) {
                if (features[18] <= 3.00000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 4;
                  values[8] = 0;
                  values[9] = 0;
                } else {
                  if (features[50] <= 14.00000000f) {
                    if (features[43] <= 10.00000000f) {
                      if (features[37] <= 7.50000000f) {
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
                      values[8] = 3;
                      values[9] = 0;
                    }
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
                if (features[36] <= 4.50000000f) {
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
                } else {
                  if (features[38] <= 6.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 8;
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
                    values[5] = 1;
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
          if (features[54] <= 11.50000000f) {
            if (features[11] <= 5.00000000f) {
              if (features[5] <= 9.00000000f) {
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
                values[4] = 2;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
            } else {
              if (features[42] <= 7.00000000f) {
                if (features[52] <= 6.00000000f) {
                  if (features[5] <= 4.50000000f) {
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
                  values[5] = 20;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              } else {
                if (features[60] <= 12.00000000f) {
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
                } else {
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
                }
              }
            }
          } else {
            if (features[2] <= 5.50000000f) {
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
      } else {
        if (features[26] <= 3.50000000f) {
          if (features[10] <= 9.00000000f) {
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
            values[5] = 2;
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
          values[5] = 64;
          values[6] = 0;
          values[7] = 0;
          values[8] = 0;
          values[9] = 0;
        }
      }
    } else {
      if (features[42] <= 1.50000000f) {
        if (features[36] <= 10.50000000f) {
          if (features[45] <= 3.50000000f) {
            if (features[18] <= 6.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 7;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              if (features[9] <= 1.50000000f) {
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
                if (features[54] <= 1.50000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
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
              }
            }
          } else {
            if (features[59] <= 1.50000000f) {
              if (features[46] <= 0.50000000f) {
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
                values[1] = 10;
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
              if (features[4] <= 15.50000000f) {
                if (features[29] <= 8.50000000f) {
                  if (features[61] <= 13.50000000f) {
                    if (features[38] <= 3.50000000f) {
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
                  if (features[26] <= 1.00000000f) {
                    if (features[3] <= 13.00000000f) {
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
                    } else {
                      if (features[22] <= 3.00000000f) {
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
                    }
                  } else {
                    if (features[5] <= 15.50000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 89;
                    } else {
                      if (features[28] <= 13.00000000f) {
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
                }
              } else {
                if (features[37] <= 13.50000000f) {
                  if (features[22] <= 2.00000000f) {
                    if (features[19] <= 9.00000000f) {
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
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 5;
                  }
                } else {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 12;
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
          if (features[19] <= 11.50000000f) {
            if (features[61] <= 0.50000000f) {
              if (features[5] <= 1.00000000f) {
                if (features[3] <= 13.50000000f) {
                  if (features[34] <= 0.50000000f) {
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
                if (features[22] <= 7.00000000f) {
                  if (features[29] <= 5.50000000f) {
                    if (features[10] <= 11.00000000f) {
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
                      if (features[10] <= 15.50000000f) {
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
                      } else {
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
                      }
                    }
                  } else {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 31;
                    values[8] = 0;
                    values[9] = 0;
                  }
                } else {
                  if (features[20] <= 1.50000000f) {
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
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 3;
                  }
                }
              }
            } else {
              if (features[18] <= 7.50000000f) {
                if (features[45] <= 5.50000000f) {
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
                  if (features[19] <= 9.00000000f) {
                    if (features[50] <= 0.50000000f) {
                      if (features[29] <= 11.50000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 10;
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
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 1;
                      }
                    } else {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 48;
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
                    values[9] = 2;
                  }
                }
              } else {
                if (features[3] <= 14.50000000f) {
                  if (features[43] <= 3.00000000f) {
                    if (features[2] <= 9.50000000f) {
                      if (features[29] <= 14.50000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 12;
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
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 3;
                    }
                  } else {
                    if (features[45] <= 6.00000000f) {
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
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 12;
                      values[9] = 0;
                    }
                  }
                } else {
                  if (features[38] <= 3.00000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 20;
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
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 2;
                  }
                }
              }
            }
          } else {
            if (features[14] <= 10.50000000f) {
              if (features[28] <= 13.50000000f) {
                if (features[25] <= 4.50000000f) {
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
                } else {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 2;
                  values[9] = 0;
                }
              } else {
                if (features[9] <= 4.00000000f) {
                  if (features[54] <= 11.00000000f) {
                    values[0] = 0;
                    values[1] = 26;
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
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 1;
                  }
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
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 3;
            }
          }
        }
      } else {
        if (features[37] <= 11.50000000f) {
          if (features[35] <= 2.00000000f) {
            if (features[2] <= 10.50000000f) {
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
          } else {
            if (features[18] <= 7.50000000f) {
              if (features[54] <= 2.50000000f) {
                if (features[20] <= 15.50000000f) {
                  if (features[45] <= 3.50000000f) {
                    if (features[28] <= 10.00000000f) {
                      if (features[28] <= 6.50000000f) {
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
                      if (features[30] <= 2.50000000f) {
                        if (features[60] <= 11.00000000f) {
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
                        } else {
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
                        }
                      } else {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 0;
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 12;
                        values[8] = 0;
                        values[9] = 0;
                      }
                    }
                  } else {
                    if (features[28] <= 15.50000000f) {
                      if (features[42] <= 8.00000000f) {
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
                        if (features[59] <= 12.00000000f) {
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
                          values[5] = 0;
                          values[6] = 0;
                          values[7] = 0;
                          values[8] = 1;
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
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 10;
                      values[9] = 0;
                    }
                  }
                } else {
                  if (features[44] <= 11.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 9;
                    values[8] = 0;
                    values[9] = 0;
                  } else {
                    if (features[41] <= 7.00000000f) {
                      if (features[54] <= 0.50000000f) {
                        values[0] = 0;
                        values[1] = 23;
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
                        values[7] = 0;
                        values[8] = 2;
                        values[9] = 0;
                      }
                    } else {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 4;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  }
                }
              } else {
                if (features[59] <= 10.50000000f) {
                  if (features[59] <= 1.50000000f) {
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
                  }
                } else {
                  if (features[45] <= 7.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 21;
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
              if (features[26] <= 1.50000000f) {
                if (features[54] <= 1.00000000f) {
                  if (features[44] <= 13.00000000f) {
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
                  } else {
                    if (features[20] <= 1.50000000f) {
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
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 2;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  }
                } else {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 12;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              } else {
                if (features[51] <= 13.50000000f) {
                  if (features[58] <= 13.50000000f) {
                    if (features[59] <= 4.50000000f) {
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
                      if (features[49] <= 7.50000000f) {
                        if (features[42] <= 3.50000000f) {
                          if (features[46] <= 1.00000000f) {
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
                          values[5] = 0;
                          values[6] = 0;
                          values[7] = 0;
                          values[8] = 75;
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
                } else {
                  if (features[2] <= 7.00000000f) {
                    if (features[27] <= 15.50000000f) {
                      if (features[36] <= 11.00000000f) {
                        if (features[10] <= 10.50000000f) {
                          values[0] = 2;
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
                          values[7] = 0;
                          values[8] = 0;
                          values[9] = 4;
                        }
                      } else {
                        if (features[50] <= 2.50000000f) {
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
                          values[2] = 6;
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
                      values[1] = 5;
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
                  }
                }
              }
            }
          }
        } else {
          if (features[34] <= 1.50000000f) {
            if (features[20] <= 6.50000000f) {
              if (features[51] <= 8.50000000f) {
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
                if (features[45] <= 15.50000000f) {
                  if (features[27] <= 5.50000000f) {
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
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 6;
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
                  values[8] = 3;
                  values[9] = 0;
                }
              }
            } else {
              if (features[61] <= 2.50000000f) {
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
                if (features[13] <= 14.50000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 9;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                } else {
                  if (features[59] <= 10.00000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 2;
                    values[9] = 0;
                  } else {
                    if (features[11] <= 9.00000000f) {
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
              }
            }
          } else {
            if (features[49] <= 0.50000000f) {
              if (features[34] <= 15.50000000f) {
                if (features[61] <= 4.00000000f) {
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
                  if (features[54] <= 4.50000000f) {
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
                if (features[4] <= 14.00000000f) {
                  values[0] = 3;
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
                  values[7] = 5;
                  values[8] = 0;
                  values[9] = 0;
                }
              }
            } else {
              if (features[12] <= 14.50000000f) {
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
              } else {
                if (features[13] <= 14.00000000f) {
                  values[0] = 2;
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
                  values[2] = 3;
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
    }
  } else {
    if (features[36] <= 0.50000000f) {
      if (features[6] <= 1.50000000f) {
        if (features[3] <= 4.00000000f) {
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
          if (features[45] <= 1.00000000f) {
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
          }
        }
      } else {
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
      }
    } else {
      if (features[46] <= 6.50000000f) {
        if (features[44] <= 12.50000000f) {
          if (features[60] <= 2.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 14;
            values[8] = 0;
            values[9] = 0;
          } else {
            if (features[20] <= 9.50000000f) {
              if (features[62] <= 0.50000000f) {
                if (features[50] <= 7.00000000f) {
                  if (features[17] <= 0.50000000f) {
                    if (features[59] <= 0.50000000f) {
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
                    } else {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 9;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  } else {
                    if (features[21] <= 2.00000000f) {
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
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 4;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  }
                } else {
                  if (features[19] <= 13.00000000f) {
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
                  } else {
                    if (features[20] <= 2.50000000f) {
                      values[0] = 2;
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
                      values[7] = 0;
                      values[8] = 2;
                      values[9] = 0;
                    }
                  }
                }
              } else {
                values[0] = 0;
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
        } else {
          if (features[19] <= 3.50000000f) {
            if (features[58] <= 8.50000000f) {
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
          } else {
            if (features[58] <= 4.50000000f) {
              if (features[13] <= 13.50000000f) {
                if (features[62] <= 1.00000000f) {
                  if (features[19] <= 4.50000000f) {
                    if (features[51] <= 12.50000000f) {
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
                      values[6] = 0;
                      values[7] = 1;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  } else {
                    if (features[61] <= 7.50000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 118;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    } else {
                      if (features[28] <= 8.50000000f) {
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
                        if (features[41] <= 3.50000000f) {
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
                  if (features[27] <= 14.00000000f) {
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
              } else {
                values[0] = 0;
                values[1] = 5;
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
              if (features[60] <= 8.00000000f) {
                if (features[18] <= 14.50000000f) {
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
              } else {
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
              }
            }
          }
        }
      } else {
        if (features[60] <= 11.00000000f) {
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
          if (features[49] <= 3.00000000f) {
            if (features[22] <= 3.00000000f) {
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
  }

  return argmax(10, values);
}

int predict_5(float features[]) {
  int values[10];
  
  if (features[36] <= 0.50000000f) {
    if (features[34] <= 3.00000000f) {
      if (features[2] <= 12.50000000f) {
        if (features[25] <= 4.50000000f) {
          if (features[21] <= 4.00000000f) {
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
            if (features[1] <= 1.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
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
          if (features[4] <= 13.50000000f) {
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
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 1;
          }
        }
      } else {
        if (features[21] <= 8.00000000f) {
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
    } else {
      if (features[59] <= 7.50000000f) {
        if (features[33] <= 2.50000000f) {
          if (features[28] <= 2.50000000f) {
            if (features[3] <= 12.00000000f) {
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
            } else {
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
            values[9] = 3;
          }
        } else {
          values[0] = 0;
          values[1] = 0;
          values[2] = 0;
          values[3] = 0;
          values[4] = 5;
          values[5] = 0;
          values[6] = 0;
          values[7] = 0;
          values[8] = 0;
          values[9] = 0;
        }
      } else {
        if (features[28] <= 4.50000000f) {
          if (features[5] <= 14.50000000f) {
            if (features[13] <= 2.00000000f) {
              if (features[4] <= 8.50000000f) {
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
              values[0] = 139;
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
          }
        } else {
          if (features[45] <= 4.50000000f) {
            if (features[2] <= 8.50000000f) {
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
            values[4] = 0;
            values[5] = 7;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        }
      }
    }
  } else {
    if (features[46] <= 5.50000000f) {
      if (features[61] <= 1.50000000f) {
        if (features[26] <= 10.50000000f) {
          if (features[60] <= 9.50000000f) {
            if (features[52] <= 11.50000000f) {
              if (features[29] <= 0.50000000f) {
                if (features[27] <= 13.00000000f) {
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
                } else {
                  if (features[14] <= 5.50000000f) {
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
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 2;
                    values[8] = 0;
                    values[9] = 0;
                  }
                }
              } else {
                if (features[53] <= 7.50000000f) {
                  if (features[42] <= 13.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 101;
                    values[8] = 0;
                    values[9] = 0;
                  } else {
                    if (features[19] <= 10.50000000f) {
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
                } else {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 2;
                  values[9] = 0;
                }
              }
            } else {
              if (features[2] <= 5.00000000f) {
                if (features[13] <= 12.00000000f) {
                  if (features[53] <= 8.00000000f) {
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
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 10;
                  values[8] = 0;
                  values[9] = 0;
                }
              } else {
                if (features[19] <= 15.00000000f) {
                  if (features[12] <= 7.50000000f) {
                    if (features[12] <= 5.00000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
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
                      values[3] = 2;
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
                    values[8] = 6;
                    values[9] = 0;
                  }
                } else {
                  values[0] = 0;
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
              }
            }
          } else {
            if (features[15] <= 0.50000000f) {
              if (features[5] <= 9.50000000f) {
                if (features[6] <= 0.50000000f) {
                  values[0] = 0;
                  values[1] = 19;
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
                  values[7] = 0;
                  values[8] = 1;
                  values[9] = 0;
                }
              } else {
                if (features[7] <= 0.50000000f) {
                  if (features[43] <= 9.50000000f) {
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
                  } else {
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
                  }
                } else {
                  values[0] = 0;
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
              }
            } else {
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
            }
          }
        } else {
          if (features[60] <= 8.50000000f) {
            if (features[58] <= 8.50000000f) {
              if (features[25] <= 5.50000000f) {
                if (features[21] <= 9.50000000f) {
                  if (features[41] <= 0.50000000f) {
                    if (features[43] <= 9.50000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 3;
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
                  } else {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 4;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  }
                } else {
                  if (features[34] <= 5.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 10;
                  } else {
                    if (features[12] <= 9.50000000f) {
                      if (features[13] <= 12.00000000f) {
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
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 1;
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
                      values[8] = 2;
                      values[9] = 0;
                    }
                  }
                }
              } else {
                if (features[27] <= 9.00000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 12;
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
              if (features[11] <= 9.50000000f) {
                if (features[29] <= 15.50000000f) {
                  if (features[38] <= 3.50000000f) {
                    if (features[52] <= 4.50000000f) {
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
                      if (features[34] <= 7.50000000f) {
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
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 3;
                        values[9] = 0;
                      }
                    }
                  } else {
                    values[0] = 0;
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
                }
              } else {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 35;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
            }
          } else {
            if (features[34] <= 11.50000000f) {
              if (features[3] <= 7.00000000f) {
                if (features[28] <= 12.50000000f) {
                  if (features[21] <= 14.50000000f) {
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
              } else {
                if (features[43] <= 8.00000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 15;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                } else {
                  if (features[7] <= 1.00000000f) {
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
              }
            } else {
              if (features[37] <= 6.00000000f) {
                if (features[50] <= 7.00000000f) {
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
                  if (features[34] <= 13.00000000f) {
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
                    if (features[50] <= 11.50000000f) {
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
              } else {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 59;
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
        if (features[27] <= 14.50000000f) {
          if (features[26] <= 7.50000000f) {
            if (features[51] <= 8.50000000f) {
              if (features[34] <= 2.50000000f) {
                if (features[18] <= 8.50000000f) {
                  if (features[37] <= 0.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 4;
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
                    values[3] = 33;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  }
                } else {
                  if (features[22] <= 2.50000000f) {
                    if (features[36] <= 8.00000000f) {
                      if (features[52] <= 10.00000000f) {
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
                      values[9] = 3;
                    }
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
                if (features[49] <= 0.50000000f) {
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
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 6;
                  values[9] = 0;
                }
              }
            } else {
              if (features[62] <= 0.50000000f) {
                if (features[54] <= 3.50000000f) {
                  if (features[2] <= 6.00000000f) {
                    if (features[9] <= 0.50000000f) {
                      if (features[20] <= 9.50000000f) {
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
                        if (features[12] <= 11.50000000f) {
                          values[0] = 0;
                          values[1] = 0;
                          values[2] = 0;
                          values[3] = 0;
                          values[4] = 0;
                          values[5] = 0;
                          values[6] = 0;
                          values[7] = 0;
                          values[8] = 2;
                          values[9] = 0;
                        } else {
                          if (features[11] <= 15.50000000f) {
                            values[0] = 0;
                            values[1] = 5;
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
                            values[7] = 0;
                            values[8] = 1;
                            values[9] = 0;
                          }
                        }
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
                      values[8] = 4;
                      values[9] = 0;
                    }
                  } else {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 6;
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
                  values[2] = 10;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              } else {
                if (features[12] <= 3.00000000f) {
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
                  if (features[34] <= 2.50000000f) {
                    if (features[36] <= 14.50000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 63;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    } else {
                      if (features[61] <= 14.50000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 10;
                        values[3] = 0;
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 0;
                      } else {
                        if (features[37] <= 2.50000000f) {
                          if (features[58] <= 8.50000000f) {
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
                          values[2] = 5;
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
                    if (features[42] <= 10.50000000f) {
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
                      if (features[63] <= 1.50000000f) {
                        if (features[43] <= 5.50000000f) {
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
                          values[2] = 8;
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
                        values[8] = 1;
                        values[9] = 0;
                      }
                    }
                  }
                }
              }
            }
          } else {
            if (features[3] <= 7.50000000f) {
              if (features[34] <= 9.50000000f) {
                if (features[20] <= 9.50000000f) {
                  if (features[14] <= 4.00000000f) {
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
                  } else {
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
                  }
                } else {
                  if (features[27] <= 1.50000000f) {
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
                    if (features[12] <= 13.50000000f) {
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
                      values[1] = 12;
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
                if (features[25] <= 2.50000000f) {
                  if (features[10] <= 0.50000000f) {
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
                } else {
                  if (features[44] <= 10.50000000f) {
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
                  } else {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 15;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  }
                }
              }
            } else {
              if (features[41] <= 1.50000000f) {
                if (features[50] <= 7.00000000f) {
                  if (features[58] <= 1.50000000f) {
                    if (features[37] <= 13.00000000f) {
                      if (features[21] <= 5.50000000f) {
                        if (features[28] <= 14.50000000f) {
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
                      } else {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 0;
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 6;
                        values[9] = 0;
                      }
                    } else {
                      if (features[13] <= 9.50000000f) {
                        if (features[28] <= 8.50000000f) {
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
                          values[5] = 1;
                          values[6] = 0;
                          values[7] = 0;
                          values[8] = 0;
                          values[9] = 0;
                        }
                      } else {
                        values[0] = 2;
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
                    if (features[12] <= 13.50000000f) {
                      if (features[27] <= 11.00000000f) {
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
                        if (features[34] <= 7.50000000f) {
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
                          values[5] = 1;
                          values[6] = 0;
                          values[7] = 0;
                          values[8] = 0;
                          values[9] = 0;
                        }
                      }
                    } else {
                      if (features[25] <= 6.50000000f) {
                        if (features[19] <= 9.50000000f) {
                          values[0] = 0;
                          values[1] = 0;
                          values[2] = 0;
                          values[3] = 0;
                          values[4] = 0;
                          values[5] = 0;
                          values[6] = 0;
                          values[7] = 0;
                          values[8] = 0;
                          values[9] = 3;
                        } else {
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
                        }
                      } else {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 6;
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
                  if (features[11] <= 15.00000000f) {
                    if (features[46] <= 4.50000000f) {
                      if (features[35] <= 10.50000000f) {
                        if (features[45] <= 2.50000000f) {
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
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 0;
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 19;
                        values[9] = 0;
                      }
                    } else {
                      if (features[50] <= 14.50000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 0;
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 0;
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
                        values[8] = 2;
                        values[9] = 0;
                      }
                    }
                  } else {
                    if (features[42] <= 15.50000000f) {
                      if (features[61] <= 9.50000000f) {
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
                        if (features[54] <= 9.00000000f) {
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
                      }
                    } else {
                      values[0] = 3;
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
                if (features[19] <= 13.00000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 12;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                } else {
                  if (features[19] <= 15.00000000f) {
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
          }
        } else {
          if (features[12] <= 15.50000000f) {
            if (features[43] <= 0.50000000f) {
              if (features[26] <= 13.50000000f) {
                if (features[61] <= 15.50000000f) {
                  if (features[10] <= 10.00000000f) {
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
                    values[9] = 8;
                  }
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
              } else {
                if (features[49] <= 1.00000000f) {
                  if (features[51] <= 2.00000000f) {
                    if (features[4] <= 12.00000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 3;
                    } else {
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
                    }
                  } else {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 13;
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
                  values[6] = 1;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              }
            } else {
              if (features[63] <= 0.50000000f) {
                if (features[45] <= 3.00000000f) {
                  if (features[59] <= 15.50000000f) {
                    if (features[12] <= 13.00000000f) {
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
                  if (features[40] <= 0.50000000f) {
                    if (features[51] <= 15.50000000f) {
                      if (features[2] <= 7.50000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 0;
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 19;
                        values[9] = 0;
                      } else {
                        if (features[35] <= 15.00000000f) {
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
                        } else {
                          if (features[42] <= 8.00000000f) {
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
                            values[5] = 0;
                            values[6] = 0;
                            values[7] = 0;
                            values[8] = 1;
                            values[9] = 0;
                          }
                        }
                      }
                    } else {
                      if (features[42] <= 5.00000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 0;
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 2;
                        values[9] = 0;
                      } else {
                        if (features[18] <= 10.50000000f) {
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
                values[0] = 0;
                values[1] = 13;
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
            if (features[49] <= 2.50000000f) {
              if (features[58] <= 7.50000000f) {
                if (features[42] <= 14.50000000f) {
                  values[0] = 0;
                  values[1] = 61;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                } else {
                  if (features[38] <= 4.50000000f) {
                    values[0] = 0;
                    values[1] = 7;
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
                    values[4] = 2;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  }
                }
              } else {
                if (features[27] <= 15.50000000f) {
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
              if (features[22] <= 0.50000000f) {
                if (features[44] <= 10.00000000f) {
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
              } else {
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
              }
            }
          }
        }
      }
    } else {
      if (features[35] <= 11.50000000f) {
        if (features[25] <= 0.50000000f) {
          if (features[59] <= 12.50000000f) {
            if (features[29] <= 11.50000000f) {
              if (features[20] <= 3.00000000f) {
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
              } else {
                if (features[10] <= 1.00000000f) {
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
              }
            } else {
              if (features[12] <= 9.00000000f) {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 2;
                values[9] = 0;
              } else {
                if (features[21] <= 12.00000000f) {
                  if (features[20] <= 15.50000000f) {
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
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 8;
                }
              }
            }
          } else {
            if (features[26] <= 3.50000000f) {
              if (features[52] <= 14.50000000f) {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 51;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              } else {
                if (features[51] <= 13.00000000f) {
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
              }
            } else {
              if (features[61] <= 11.50000000f) {
                if (features[36] <= 6.00000000f) {
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
                  values[3] = 9;
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
                values[9] = 8;
              }
            }
          }
        } else {
          if (features[42] <= 11.00000000f) {
            if (features[12] <= 8.50000000f) {
              if (features[58] <= 4.00000000f) {
                if (features[58] <= 1.00000000f) {
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
                values[5] = 16;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
            } else {
              if (features[59] <= 1.50000000f) {
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
              } else {
                if (features[54] <= 2.50000000f) {
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
                  if (features[44] <= 0.50000000f) {
                    if (features[20] <= 0.50000000f) {
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
                      if (features[4] <= 15.50000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 0;
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 23;
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
                    if (features[35] <= 9.50000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 7;
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
                      values[7] = 0;
                      values[8] = 1;
                      values[9] = 0;
                    }
                  }
                }
              }
            }
          } else {
            if (features[54] <= 2.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 5;
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
              values[6] = 16;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        }
      } else {
        if (features[9] <= 0.50000000f) {
          if (features[51] <= 3.00000000f) {
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
            values[6] = 76;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        } else {
          if (features[12] <= 12.50000000f) {
            if (features[22] <= 0.50000000f) {
              if (features[30] <= 0.50000000f) {
                if (features[1] <= 0.50000000f) {
                  if (features[50] <= 10.50000000f) {
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
                  if (features[34] <= 0.50000000f) {
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
                    values[2] = 1;
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
                values[5] = 2;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
            } else {
              if (features[28] <= 11.50000000f) {
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
              } else {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 6;
                values[9] = 0;
              }
            }
          } else {
            if (features[51] <= 8.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 10;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              if (features[25] <= 0.50000000f) {
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
            }
          }
        }
      }
    }
  }

  return argmax(10, values);
}

int predict_6(float features[]) {
  int values[10];
  
  if (features[28] <= 0.50000000f) {
    if (features[30] <= 1.00000000f) {
      if (features[42] <= 9.50000000f) {
        if (features[57] <= 1.00000000f) {
          if (features[12] <= 14.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 4;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            if (features[35] <= 14.50000000f) {
              if (features[26] <= 11.00000000f) {
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
                values[8] = 0;
                values[9] = 1;
              }
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
        }
      } else {
        if (features[9] <= 4.00000000f) {
          if (features[52] <= 14.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 56;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          } else {
            if (features[46] <= 0.50000000f) {
              values[0] = 3;
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
              if (features[58] <= 2.50000000f) {
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
            }
          }
        } else {
          values[0] = 0;
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
      }
    } else {
      if (features[50] <= 4.50000000f) {
        if (features[36] <= 6.00000000f) {
          if (features[6] <= 11.00000000f) {
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
          if (features[10] <= 13.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 14;
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
        }
      } else {
        if (features[18] <= 9.50000000f) {
          if (features[45] <= 11.50000000f) {
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
            values[4] = 10;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        } else {
          values[0] = 124;
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
    if (features[19] <= 13.50000000f) {
      if (features[60] <= 2.50000000f) {
        if (features[17] <= 4.50000000f) {
          if (features[53] <= 1.00000000f) {
            if (features[25] <= 7.00000000f) {
              if (features[35] <= 14.50000000f) {
                if (features[12] <= 5.50000000f) {
                  if (features[19] <= 3.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 3;
                    values[8] = 0;
                    values[9] = 0;
                  } else {
                    if (features[22] <= 3.00000000f) {
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
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 37;
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
                values[7] = 53;
                values[8] = 0;
                values[9] = 0;
              }
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 4;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[44] <= 15.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 3;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              if (features[36] <= 15.50000000f) {
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
          }
        } else {
          if (features[26] <= 10.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 4;
            values[8] = 0;
            values[9] = 0;
          } else {
            if (features[14] <= 5.00000000f) {
              if (features[4] <= 6.00000000f) {
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
                values[5] = 3;
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
              values[9] = 6;
            }
          }
        }
      } else {
        if (features[43] <= 3.50000000f) {
          if (features[20] <= 5.50000000f) {
            if (features[59] <= 15.50000000f) {
              if (features[52] <= 11.50000000f) {
                if (features[36] <= 14.00000000f) {
                  if (features[4] <= 4.50000000f) {
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
                  } else {
                    if (features[26] <= 13.50000000f) {
                      if (features[33] <= 3.00000000f) {
                        if (features[29] <= 13.00000000f) {
                          if (features[17] <= 2.00000000f) {
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
                            values[4] = 0;
                            values[5] = 0;
                            values[6] = 0;
                            values[7] = 0;
                            values[8] = 0;
                            values[9] = 5;
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
                          values[9] = 25;
                        }
                      } else {
                        values[0] = 2;
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
                      if (features[22] <= 2.00000000f) {
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
                        values[3] = 0;
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 12;
                      }
                    }
                  }
                } else {
                  if (features[35] <= 11.00000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 8;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  } else {
                    if (features[25] <= 0.50000000f) {
                      if (features[11] <= 12.00000000f) {
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
                  }
                }
              } else {
                if (features[59] <= 9.50000000f) {
                  if (features[53] <= 2.00000000f) {
                    if (features[43] <= 0.50000000f) {
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
                    } else {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 4;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  } else {
                    if (features[11] <= 11.00000000f) {
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
                    } else {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 6;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  }
                } else {
                  if (features[29] <= 14.50000000f) {
                    if (features[27] <= 6.00000000f) {
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
                      if (features[36] <= 15.50000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 0;
                        values[4] = 0;
                        values[5] = 22;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 0;
                      } else {
                        if (features[27] <= 14.50000000f) {
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
                    if (features[22] <= 14.50000000f) {
                      if (features[49] <= 1.00000000f) {
                        if (features[13] <= 13.00000000f) {
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
                        values[0] = 2;
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
            } else {
              if (features[58] <= 2.50000000f) {
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
                if (features[21] <= 6.50000000f) {
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
                  if (features[38] <= 3.50000000f) {
                    if (features[29] <= 8.50000000f) {
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
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 1;
                  }
                }
              }
            }
          } else {
            if (features[27] <= 14.50000000f) {
              if (features[62] <= 5.50000000f) {
                if (features[25] <= 0.50000000f) {
                  if (features[30] <= 0.50000000f) {
                    if (features[52] <= 0.50000000f) {
                      if (features[45] <= 6.00000000f) {
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
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 75;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  } else {
                    if (features[26] <= 1.00000000f) {
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
                      values[9] = 20;
                    }
                  }
                } else {
                  if (features[33] <= 1.50000000f) {
                    if (features[52] <= 10.00000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 10;
                    } else {
                      if (features[59] <= 5.50000000f) {
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
                        if (features[19] <= 0.50000000f) {
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
                        } else {
                          if (features[59] <= 12.50000000f) {
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
                            if (features[20] <= 13.00000000f) {
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
                      }
                    }
                  } else {
                    if (features[18] <= 11.50000000f) {
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
                      values[5] = 4;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  }
                }
              } else {
                if (features[44] <= 0.50000000f) {
                  if (features[10] <= 6.00000000f) {
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
                    if (features[28] <= 15.50000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 13;
                    } else {
                      if (features[53] <= 9.50000000f) {
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
                        if (features[25] <= 0.50000000f) {
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
                          values[5] = 0;
                          values[6] = 0;
                          values[7] = 0;
                          values[8] = 0;
                          values[9] = 1;
                        }
                      }
                    }
                  }
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
              }
            } else {
              if (features[35] <= 11.50000000f) {
                if (features[20] <= 14.50000000f) {
                  if (features[9] <= 4.50000000f) {
                    if (features[58] <= 13.00000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 27;
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
                  } else {
                    if (features[4] <= 15.50000000f) {
                      if (features[18] <= 4.50000000f) {
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
                  if (features[54] <= 4.50000000f) {
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
                    if (features[21] <= 12.00000000f) {
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
                if (features[13] <= 14.50000000f) {
                  if (features[21] <= 5.50000000f) {
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
                } else {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 10;
                  values[9] = 0;
                }
              }
            }
          }
        } else {
          if (features[58] <= 7.50000000f) {
            if (features[37] <= 10.50000000f) {
              if (features[45] <= 0.50000000f) {
                if (features[35] <= 12.50000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 25;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                } else {
                  if (features[52] <= 13.00000000f) {
                    if (features[53] <= 2.50000000f) {
                      if (features[44] <= 8.50000000f) {
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
                        if (features[3] <= 10.00000000f) {
                          values[0] = 0;
                          values[1] = 0;
                          values[2] = 0;
                          values[3] = 0;
                          values[4] = 0;
                          values[5] = 3;
                          values[6] = 0;
                          values[7] = 0;
                          values[8] = 0;
                          values[9] = 0;
                        } else {
                          if (features[29] <= 8.00000000f) {
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
                      }
                    } else {
                      if (features[5] <= 1.00000000f) {
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
                        values[2] = 6;
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
                    if (features[50] <= 7.50000000f) {
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
                    } else {
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
                    }
                  }
                }
              } else {
                if (features[52] <= 14.50000000f) {
                  if (features[27] <= 10.50000000f) {
                    if (features[33] <= 1.50000000f) {
                      if (features[50] <= 3.00000000f) {
                        if (features[6] <= 2.00000000f) {
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
                        } else {
                          values[0] = 0;
                          values[1] = 0;
                          values[2] = 0;
                          values[3] = 0;
                          values[4] = 0;
                          values[5] = 0;
                          values[6] = 0;
                          values[7] = 3;
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
                        values[8] = 3;
                        values[9] = 0;
                      }
                    } else {
                      if (features[49] <= 1.50000000f) {
                        if (features[2] <= 0.50000000f) {
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
                          values[6] = 3;
                          values[7] = 0;
                          values[8] = 0;
                          values[9] = 0;
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
                  } else {
                    if (features[13] <= 1.00000000f) {
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
                      values[8] = 38;
                      values[9] = 0;
                    }
                  }
                } else {
                  if (features[42] <= 15.50000000f) {
                    if (features[45] <= 9.50000000f) {
                      if (features[46] <= 4.00000000f) {
                        if (features[29] <= 10.50000000f) {
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
                          if (features[10] <= 13.50000000f) {
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
                            values[2] = 1;
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
                        values[2] = 2;
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
                      values[8] = 4;
                      values[9] = 0;
                    }
                  } else {
                    if (features[21] <= 4.00000000f) {
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
              if (features[21] <= 0.50000000f) {
                if (features[54] <= 2.00000000f) {
                  if (features[30] <= 6.50000000f) {
                    if (features[4] <= 13.50000000f) {
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
                      values[5] = 1;
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
                    values[4] = 3;
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
                  values[6] = 20;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              } else {
                if (features[4] <= 12.50000000f) {
                  if (features[54] <= 2.50000000f) {
                    if (features[49] <= 2.50000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 40;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    } else {
                      if (features[10] <= 2.00000000f) {
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
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 0;
                        values[4] = 5;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 0;
                      }
                    }
                  } else {
                    if (features[12] <= 9.00000000f) {
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
                  if (features[10] <= 3.50000000f) {
                    if (features[20] <= 13.50000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 8;
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
                  } else {
                    if (features[53] <= 7.50000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 21;
                      values[8] = 0;
                      values[9] = 0;
                    } else {
                      if (features[34] <= 10.00000000f) {
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
                  }
                }
              }
            }
          } else {
            if (features[18] <= 13.50000000f) {
              if (features[51] <= 8.50000000f) {
                if (features[44] <= 3.00000000f) {
                  if (features[46] <= 1.00000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 6;
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
                    values[7] = 0;
                    values[8] = 1;
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
                    values[7] = 0;
                    values[8] = 7;
                    values[9] = 0;
                  } else {
                    if (features[43] <= 6.00000000f) {
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
                    } else {
                      if (features[5] <= 9.50000000f) {
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
                }
              } else {
                if (features[53] <= 2.00000000f) {
                  if (features[19] <= 3.00000000f) {
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
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 1;
                    values[9] = 0;
                  }
                } else {
                  if (features[43] <= 6.50000000f) {
                    if (features[18] <= 3.50000000f) {
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
                    } else {
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
                    }
                  } else {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 71;
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
              if (features[20] <= 9.50000000f) {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 24;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              } else {
                if (features[20] <= 14.00000000f) {
                  if (features[18] <= 15.00000000f) {
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
                  values[2] = 2;
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
    } else {
      if (features[37] <= 8.50000000f) {
        if (features[28] <= 4.00000000f) {
          values[0] = 0;
          values[1] = 0;
          values[2] = 0;
          values[3] = 0;
          values[4] = 0;
          values[5] = 0;
          values[6] = 8;
          values[7] = 0;
          values[8] = 0;
          values[9] = 0;
        } else {
          if (features[6] <= 5.50000000f) {
            if (features[22] <= 0.50000000f) {
              if (features[3] <= 3.50000000f) {
                if (features[42] <= 8.00000000f) {
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
              } else {
                if (features[45] <= 12.00000000f) {
                  if (features[36] <= 7.50000000f) {
                    if (features[21] <= 2.50000000f) {
                      if (features[34] <= 6.50000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 4;
                        values[3] = 0;
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
                    } else {
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
                    }
                  } else {
                    if (features[14] <= 6.50000000f) {
                      if (features[60] <= 1.50000000f) {
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
                        values[1] = 85;
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
                    }
                  }
                } else {
                  if (features[44] <= 10.50000000f) {
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
              if (features[43] <= 15.00000000f) {
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
              } else {
                if (features[29] <= 7.00000000f) {
                  if (features[21] <= 14.00000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
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
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 1;
                    values[8] = 0;
                    values[9] = 0;
                  }
                } else {
                  values[0] = 0;
                  values[1] = 5;
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
        if (features[34] <= 14.00000000f) {
          if (features[3] <= 12.50000000f) {
            if (features[28] <= 3.00000000f) {
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
              if (features[12] <= 14.50000000f) {
                if (features[17] <= 1.00000000f) {
                  if (features[27] <= 7.00000000f) {
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
                    if (features[1] <= 0.50000000f) {
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
                      values[8] = 1;
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
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 1;
                }
              } else {
                if (features[53] <= 5.00000000f) {
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
                  if (features[13] <= 6.50000000f) {
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
                    if (features[45] <= 15.50000000f) {
                      if (features[10] <= 13.50000000f) {
                        values[0] = 0;
                        values[1] = 7;
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
                        values[5] = 1;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 0;
                      }
                    } else {
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
                    }
                  }
                }
              }
            }
          } else {
            if (features[21] <= 6.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 4;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              if (features[17] <= 5.50000000f) {
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
          if (features[46] <= 5.50000000f) {
            if (features[53] <= 15.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 42;
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
            values[6] = 13;
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

int predict_7(float features[]) {
  int values[10];
  
  if (features[19] <= 13.50000000f) {
    if (features[53] <= 1.50000000f) {
      if (features[58] <= 0.50000000f) {
        if (features[34] <= 8.50000000f) {
          if (features[29] <= 11.50000000f) {
            if (features[18] <= 3.50000000f) {
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
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 3;
            }
          } else {
            if (features[51] <= 12.50000000f) {
              if (features[12] <= 9.00000000f) {
                if (features[5] <= 14.50000000f) {
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
                  values[7] = 1;
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
                values[7] = 10;
                values[8] = 0;
                values[9] = 0;
              }
            } else {
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
            }
          }
        } else {
          if (features[13] <= 13.50000000f) {
            if (features[25] <= 1.00000000f) {
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
              values[4] = 47;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[26] <= 12.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 4;
              values[8] = 0;
              values[9] = 0;
            } else {
              if (features[5] <= 5.50000000f) {
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
                values[6] = 0;
                values[7] = 0;
                values[8] = 1;
                values[9] = 0;
              }
            }
          }
        }
      } else {
        if (features[37] <= 0.50000000f) {
          if (features[28] <= 9.00000000f) {
            if (features[28] <= 7.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 27;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              if (features[34] <= 1.00000000f) {
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
            if (features[28] <= 13.50000000f) {
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
            } else {
              if (features[29] <= 1.00000000f) {
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
                if (features[12] <= 6.00000000f) {
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
                  if (features[12] <= 10.50000000f) {
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
                    if (features[43] <= 10.50000000f) {
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
                      if (features[17] <= 3.50000000f) {
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
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 1;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          if (features[18] <= 12.50000000f) {
            if (features[54] <= 7.50000000f) {
              if (features[12] <= 15.50000000f) {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 68;
                values[8] = 0;
                values[9] = 0;
              } else {
                if (features[2] <= 4.00000000f) {
                  if (features[19] <= 8.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 4;
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
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 15;
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
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 2;
            }
          } else {
            if (features[25] <= 4.00000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 24;
              values[8] = 0;
              values[9] = 0;
            } else {
              if (features[27] <= 10.00000000f) {
                if (features[3] <= 14.50000000f) {
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
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 12;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              } else {
                if (features[13] <= 10.50000000f) {
                  if (features[25] <= 7.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
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
                    values[4] = 2;
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
                  values[9] = 7;
                }
              }
            }
          }
        }
      }
    } else {
      if (features[35] <= 1.50000000f) {
        if (features[30] <= 1.50000000f) {
          if (features[43] <= 2.00000000f) {
            if (features[21] <= 4.00000000f) {
              if (features[45] <= 15.50000000f) {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 22;
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
            } else {
              if (features[4] <= 10.50000000f) {
                if (features[28] <= 9.50000000f) {
                  values[0] = 2;
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
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 8;
                }
              } else {
                if (features[4] <= 14.50000000f) {
                  if (features[28] <= 5.50000000f) {
                    values[0] = 3;
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
                    if (features[59] <= 11.00000000f) {
                      if (features[14] <= 0.50000000f) {
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
                      values[3] = 6;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  }
                } else {
                  if (features[37] <= 15.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 13;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  } else {
                    if (features[3] <= 13.00000000f) {
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
              }
            }
          } else {
            if (features[46] <= 4.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 15;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              if (features[11] <= 13.50000000f) {
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
          if (features[30] <= 4.50000000f) {
            if (features[61] <= 6.50000000f) {
              if (features[2] <= 10.00000000f) {
                values[0] = 11;
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
                values[5] = 1;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
            } else {
              if (features[20] <= 4.00000000f) {
                if (features[22] <= 1.00000000f) {
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
                  values[0] = 2;
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
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 14;
              }
            }
          } else {
            if (features[33] <= 1.00000000f) {
              if (features[36] <= 2.00000000f) {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 10;
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
              if (features[20] <= 7.50000000f) {
                if (features[59] <= 7.50000000f) {
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
                } else {
                  values[0] = 103;
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
                if (features[51] <= 4.50000000f) {
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
            }
          }
        }
      } else {
        if (features[37] <= 0.50000000f) {
          if (features[20] <= 3.00000000f) {
            if (features[42] <= 8.00000000f) {
              if (features[45] <= 1.50000000f) {
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
                values[5] = 8;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
            } else {
              if (features[54] <= 6.50000000f) {
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
              } else {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 2;
                values[9] = 0;
              }
            }
          } else {
            if (features[11] <= 2.50000000f) {
              if (features[36] <= 15.00000000f) {
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
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
            } else {
              if (features[34] <= 6.00000000f) {
                if (features[27] <= 14.00000000f) {
                  if (features[59] <= 10.50000000f) {
                    if (features[13] <= 9.00000000f) {
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
                    } else {
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
                    }
                  } else {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 65;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  }
                } else {
                  if (features[12] <= 15.50000000f) {
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
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 1;
                    values[9] = 0;
                  }
                }
              } else {
                if (features[26] <= 5.50000000f) {
                  if (features[19] <= 9.00000000f) {
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
                  values[8] = 10;
                  values[9] = 0;
                }
              }
            }
          }
        } else {
          if (features[28] <= 4.50000000f) {
            if (features[51] <= 6.00000000f) {
              if (features[42] <= 8.00000000f) {
                if (features[25] <= 2.50000000f) {
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
                if (features[52] <= 7.00000000f) {
                  if (features[19] <= 3.50000000f) {
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
                  } else {
                    if (features[26] <= 14.50000000f) {
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
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 11;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              }
            } else {
              if (features[53] <= 15.50000000f) {
                if (features[60] <= 11.50000000f) {
                  if (features[45] <= 10.00000000f) {
                    if (features[37] <= 4.00000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 3;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    } else {
                      if (features[51] <= 13.50000000f) {
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
                      } else {
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
                      }
                    }
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
                  if (features[21] <= 4.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 55;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  } else {
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
                  }
                }
              } else {
                if (features[12] <= 10.00000000f) {
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
                  values[0] = 8;
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
            if (features[42] <= 6.00000000f) {
              if (features[29] <= 13.50000000f) {
                if (features[61] <= 6.50000000f) {
                  if (features[26] <= 4.00000000f) {
                    if (features[13] <= 7.50000000f) {
                      if (features[17] <= 0.50000000f) {
                        if (features[60] <= 11.50000000f) {
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
                      } else {
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
                      }
                    } else {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 14;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  } else {
                    if (features[20] <= 12.00000000f) {
                      if (features[43] <= 10.50000000f) {
                        if (features[49] <= 5.50000000f) {
                          if (features[10] <= 9.50000000f) {
                            if (features[34] <= 6.00000000f) {
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
                            } else {
                              values[0] = 0;
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
                            values[0] = 0;
                            values[1] = 0;
                            values[2] = 0;
                            values[3] = 0;
                            values[4] = 0;
                            values[5] = 30;
                            values[6] = 0;
                            values[7] = 0;
                            values[8] = 0;
                            values[9] = 0;
                          }
                        } else {
                          if (features[5] <= 11.50000000f) {
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
                          } else {
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
                          }
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
                        values[8] = 1;
                        values[9] = 0;
                      }
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
                } else {
                  if (features[43] <= 3.00000000f) {
                    if (features[34] <= 3.50000000f) {
                      if (features[38] <= 7.00000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 54;
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 0;
                      } else {
                        if (features[58] <= 7.50000000f) {
                          values[0] = 0;
                          values[1] = 0;
                          values[2] = 0;
                          values[3] = 0;
                          values[4] = 0;
                          values[5] = 0;
                          values[6] = 0;
                          values[7] = 0;
                          values[8] = 0;
                          values[9] = 3;
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
                    } else {
                      if (features[37] <= 9.00000000f) {
                        if (features[34] <= 11.50000000f) {
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
                      }
                    }
                  } else {
                    if (features[26] <= 2.50000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 10;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    } else {
                      if (features[17] <= 1.50000000f) {
                        if (features[10] <= 6.50000000f) {
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
                        if (features[43] <= 8.00000000f) {
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
                        } else {
                          values[0] = 0;
                          values[1] = 0;
                          values[2] = 0;
                          values[3] = 0;
                          values[4] = 0;
                          values[5] = 0;
                          values[6] = 0;
                          values[7] = 0;
                          values[8] = 10;
                          values[9] = 0;
                        }
                      }
                    }
                  }
                }
              } else {
                if (features[52] <= 14.50000000f) {
                  if (features[58] <= 13.00000000f) {
                    if (features[3] <= 5.00000000f) {
                      if (features[29] <= 15.50000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 0;
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 6;
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
                    } else {
                      if (features[33] <= 3.00000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 0;
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 53;
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
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 4;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  }
                } else {
                  if (features[5] <= 0.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 17;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  } else {
                    if (features[33] <= 0.50000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
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
              if (features[34] <= 13.50000000f) {
                if (features[27] <= 6.00000000f) {
                  if (features[45] <= 5.00000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 11;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  } else {
                    if (features[35] <= 4.50000000f) {
                      if (features[36] <= 14.50000000f) {
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
                    } else {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 4;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  }
                } else {
                  if (features[10] <= 1.00000000f) {
                    values[0] = 0;
                    values[1] = 6;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  } else {
                    if (features[3] <= 15.50000000f) {
                      if (features[21] <= 7.50000000f) {
                        if (features[11] <= 5.50000000f) {
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
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 41;
                        values[9] = 0;
                      }
                    } else {
                      if (features[13] <= 11.50000000f) {
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
                      } else {
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
                      }
                    }
                  }
                }
              } else {
                if (features[27] <= 6.50000000f) {
                  if (features[52] <= 11.50000000f) {
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
                  if (features[60] <= 11.50000000f) {
                    if (features[54] <= 0.50000000f) {
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
                      if (features[37] <= 11.50000000f) {
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
                        values[4] = 0;
                        values[5] = 2;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 0;
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
                      values[6] = 14;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if (features[27] <= 15.50000000f) {
      if (features[3] <= 5.50000000f) {
        if (features[33] <= 1.50000000f) {
          if (features[30] <= 8.50000000f) {
            if (features[29] <= 1.00000000f) {
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
              if (features[5] <= 6.00000000f) {
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
            }
          } else {
            if (features[22] <= 7.00000000f) {
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
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 1;
            }
          }
        } else {
          values[0] = 0;
          values[1] = 0;
          values[2] = 0;
          values[3] = 0;
          values[4] = 45;
          values[5] = 0;
          values[6] = 0;
          values[7] = 0;
          values[8] = 0;
          values[9] = 0;
        }
      } else {
        if (features[36] <= 0.50000000f) {
          if (features[38] <= 1.00000000f) {
            if (features[18] <= 14.50000000f) {
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
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 2;
              values[9] = 0;
            }
          } else {
            if (features[53] <= 11.50000000f) {
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
            } else {
              if (features[62] <= 0.50000000f) {
                values[0] = 11;
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
                if (features[11] <= 15.00000000f) {
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
                  values[0] = 3;
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
        } else {
          if (features[21] <= 0.50000000f) {
            if (features[58] <= 6.50000000f) {
              if (features[25] <= 4.00000000f) {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 0;
                values[6] = 20;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              } else {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 4;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
            } else {
              if (features[2] <= 14.50000000f) {
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
                values[2] = 1;
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
            if (features[53] <= 3.00000000f) {
              if (features[29] <= 1.00000000f) {
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
            } else {
              if (features[26] <= 2.50000000f) {
                if (features[18] <= 1.00000000f) {
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
                } else {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 10;
                  values[9] = 0;
                }
              } else {
                if (features[2] <= 3.00000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 5;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                } else {
                  if (features[17] <= 0.50000000f) {
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
                    if (features[42] <= 1.00000000f) {
                      if (features[25] <= 2.50000000f) {
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
                    } else {
                      values[0] = 0;
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
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if (features[28] <= 8.50000000f) {
        if (features[58] <= 2.00000000f) {
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
        } else {
          if (features[2] <= 13.00000000f) {
            if (features[22] <= 0.50000000f) {
              if (features[5] <= 2.50000000f) {
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
                if (features[51] <= 7.50000000f) {
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
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 2;
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
              values[6] = 0;
              values[7] = 0;
              values[8] = 2;
              values[9] = 0;
            }
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 4;
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
        if (features[52] <= 8.50000000f) {
          if (features[45] <= 4.00000000f) {
            if (features[1] <= 1.50000000f) {
              values[0] = 0;
              values[1] = 7;
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
            if (features[30] <= 3.00000000f) {
              if (features[46] <= 8.00000000f) {
                if (features[51] <= 2.50000000f) {
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
                values[5] = 0;
                values[6] = 4;
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
              values[9] = 4;
            }
          }
        } else {
          if (features[12] <= 13.50000000f) {
            if (features[62] <= 7.00000000f) {
              if (features[22] <= 3.50000000f) {
                if (features[20] <= 6.50000000f) {
                  if (features[61] <= 7.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
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
                    values[6] = 1;
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
                  values[8] = 1;
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
                values[9] = 2;
              }
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
          } else {
            if (features[46] <= 3.00000000f) {
              if (features[41] <= 6.00000000f) {
                if (features[21] <= 14.50000000f) {
                  values[0] = 0;
                  values[1] = 62;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                } else {
                  if (features[19] <= 14.50000000f) {
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
                    values[1] = 16;
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
                values[4] = 1;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
            } else {
              if (features[25] <= 5.50000000f) {
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
        }
      }
    }
  }

  return argmax(10, values);
}

int predict_8(float features[]) {
  int values[10];
  
  if (features[36] <= 0.50000000f) {
    if (features[62] <= 0.50000000f) {
      if (features[30] <= 2.50000000f) {
        if (features[21] <= 6.00000000f) {
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
          if (features[42] <= 5.50000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 9;
          } else {
            if (features[59] <= 14.00000000f) {
              values[0] = 2;
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
              values[7] = 0;
              values[8] = 2;
              values[9] = 0;
            }
          }
        }
      } else {
        if (features[33] <= 0.50000000f) {
          if (features[44] <= 5.00000000f) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 22;
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
        } else {
          if (features[21] <= 0.50000000f) {
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
          } else {
            if (features[21] <= 7.00000000f) {
              if (features[45] <= 12.50000000f) {
                if (features[27] <= 14.50000000f) {
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
            } else {
              if (features[33] <= 3.50000000f) {
                if (features[44] <= 4.00000000f) {
                  values[0] = 8;
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
                  values[5] = 1;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              } else {
                values[0] = 127;
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
    } else {
      if (features[20] <= 4.00000000f) {
        if (features[28] <= 7.50000000f) {
          values[0] = 11;
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
          values[5] = 3;
          values[6] = 0;
          values[7] = 0;
          values[8] = 0;
          values[9] = 0;
        }
      } else {
        if (features[28] <= 7.50000000f) {
          if (features[18] <= 10.00000000f) {
            if (features[13] <= 2.50000000f) {
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
            values[0] = 2;
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
          values[0] = 0;
          values[1] = 0;
          values[2] = 0;
          values[3] = 0;
          values[4] = 0;
          values[5] = 0;
          values[6] = 0;
          values[7] = 0;
          values[8] = 0;
          values[9] = 28;
        }
      }
    }
  } else {
    if (features[60] <= 3.50000000f) {
      if (features[21] <= 1.00000000f) {
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
      } else {
        if (features[12] <= 4.50000000f) {
          if (features[38] <= 1.50000000f) {
            if (features[19] <= 2.50000000f) {
              if (features[28] <= 15.50000000f) {
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
                if (features[44] <= 7.50000000f) {
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
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 4;
                }
              }
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 4;
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
            values[7] = 3;
            values[8] = 0;
            values[9] = 0;
          }
        } else {
          if (features[2] <= 14.00000000f) {
            if (features[19] <= 14.00000000f) {
              if (features[37] <= 0.50000000f) {
                if (features[3] <= 15.00000000f) {
                  if (features[5] <= 7.50000000f) {
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
                    if (features[60] <= 0.50000000f) {
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
                      values[3] = 2;
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
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 2;
                  values[9] = 0;
                }
              } else {
                if (features[2] <= 0.50000000f) {
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
                } else {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 94;
                  values[8] = 0;
                  values[9] = 0;
                }
              }
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
        }
      }
    } else {
      if (features[33] <= 3.50000000f) {
        if (features[20] <= 11.50000000f) {
          if (features[21] <= 3.50000000f) {
            if (features[13] <= 2.50000000f) {
              if (features[61] <= 8.50000000f) {
                if (features[10] <= 8.50000000f) {
                  if (features[59] <= 7.50000000f) {
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
                } else {
                  if (features[26] <= 6.50000000f) {
                    if (features[20] <= 7.50000000f) {
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
                  } else {
                    if (features[60] <= 14.50000000f) {
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
                      if (features[46] <= 4.50000000f) {
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
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 2;
                        values[9] = 0;
                      }
                    }
                  }
                }
              } else {
                if (features[59] <= 15.50000000f) {
                  if (features[34] <= 6.00000000f) {
                    if (features[43] <= 7.50000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 4;
                      values[6] = 0;
                      values[7] = 0;
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
                    values[6] = 53;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  }
                } else {
                  if (features[49] <= 1.50000000f) {
                    if (features[44] <= 7.50000000f) {
                      if (features[58] <= 6.50000000f) {
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
                      values[1] = 7;
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
                }
              }
            } else {
              if (features[53] <= 13.50000000f) {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 64;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              } else {
                if (features[18] <= 6.00000000f) {
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
                  values[5] = 16;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              }
            }
          } else {
            if (features[30] <= 0.50000000f) {
              if (features[54] <= 8.50000000f) {
                if (features[51] <= 13.50000000f) {
                  if (features[42] <= 7.00000000f) {
                    if (features[26] <= 5.00000000f) {
                      if (features[53] <= 9.50000000f) {
                        if (features[53] <= 6.00000000f) {
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
                      } else {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 20;
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 0;
                      }
                    } else {
                      if (features[50] <= 12.00000000f) {
                        if (features[61] <= 14.50000000f) {
                          if (features[45] <= 10.50000000f) {
                            if (features[27] <= 11.50000000f) {
                              if (features[3] <= 11.50000000f) {
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
                              values[9] = 3;
                            }
                          } else {
                            if (features[13] <= 11.50000000f) {
                              if (features[38] <= 0.50000000f) {
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
                                values[1] = 0;
                                values[2] = 0;
                                values[3] = 0;
                                values[4] = 0;
                                values[5] = 0;
                                values[6] = 0;
                                values[7] = 0;
                                values[8] = 1;
                                values[9] = 0;
                              }
                            } else {
                              if (features[29] <= 14.00000000f) {
                                values[0] = 0;
                                values[1] = 0;
                                values[2] = 0;
                                values[3] = 0;
                                values[4] = 0;
                                values[5] = 0;
                                values[6] = 0;
                                values[7] = 0;
                                values[8] = 12;
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
                                values[9] = 1;
                              }
                            }
                          }
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
                        values[9] = 3;
                      }
                    }
                  } else {
                    if (features[28] <= 3.00000000f) {
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
                      if (features[38] <= 0.50000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 0;
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 44;
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
                  if (features[35] <= 11.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 13;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  } else {
                    if (features[53] <= 8.00000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
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
                }
              } else {
                if (features[28] <= 14.00000000f) {
                  if (features[38] <= 0.50000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 7;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  } else {
                    if (features[33] <= 0.50000000f) {
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
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 1;
                    }
                  }
                } else {
                  if (features[4] <= 11.00000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 6;
                  } else {
                    if (features[5] <= 9.50000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 12;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    } else {
                      if (features[37] <= 15.50000000f) {
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
                }
              }
            } else {
              if (features[36] <= 11.50000000f) {
                if (features[55] <= 0.50000000f) {
                  if (features[60] <= 6.50000000f) {
                    if (features[62] <= 2.00000000f) {
                      if (features[60] <= 4.50000000f) {
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
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 32;
                  }
                } else {
                  if (features[45] <= 6.50000000f) {
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
                }
              } else {
                if (features[61] <= 1.50000000f) {
                  if (features[35] <= 9.50000000f) {
                    if (features[22] <= 12.50000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 6;
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
                  } else {
                    if (features[41] <= 4.50000000f) {
                      if (features[29] <= 11.00000000f) {
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
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 16;
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
                      values[8] = 2;
                      values[9] = 0;
                    }
                  }
                } else {
                  if (features[51] <= 15.50000000f) {
                    if (features[60] <= 9.00000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 3;
                    } else {
                      if (features[54] <= 11.00000000f) {
                        if (features[5] <= 13.00000000f) {
                          values[0] = 0;
                          values[1] = 0;
                          values[2] = 0;
                          values[3] = 0;
                          values[4] = 0;
                          values[5] = 0;
                          values[6] = 0;
                          values[7] = 0;
                          values[8] = 23;
                          values[9] = 0;
                        } else {
                          if (features[20] <= 1.00000000f) {
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
                            values[3] = 2;
                            values[4] = 0;
                            values[5] = 0;
                            values[6] = 0;
                            values[7] = 0;
                            values[8] = 0;
                            values[9] = 0;
                          }
                        }
                      } else {
                        if (features[4] <= 12.50000000f) {
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
                          values[2] = 0;
                          values[3] = 0;
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
                    if (features[53] <= 12.00000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 6;
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
                      values[7] = 0;
                      values[8] = 2;
                      values[9] = 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if (features[58] <= 2.50000000f) {
            if (features[19] <= 8.50000000f) {
              if (features[62] <= 8.00000000f) {
                if (features[18] <= 2.50000000f) {
                  if (features[49] <= 1.50000000f) {
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
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 2;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  }
                } else {
                  if (features[17] <= 1.00000000f) {
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
                    values[3] = 2;
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
              if (features[6] <= 11.00000000f) {
                if (features[35] <= 8.50000000f) {
                  if (features[33] <= 2.00000000f) {
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
                  } else {
                    if (features[51] <= 10.00000000f) {
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
                    } else {
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
                    }
                  }
                } else {
                  if (features[60] <= 12.50000000f) {
                    if (features[5] <= 1.50000000f) {
                      if (features[13] <= 6.00000000f) {
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
                      } else {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 0;
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 2;
                        values[9] = 0;
                      }
                    } else {
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
                    }
                  } else {
                    values[0] = 0;
                    values[1] = 55;
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
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 4;
              }
            }
          } else {
            if (features[50] <= 6.00000000f) {
              if (features[4] <= 13.50000000f) {
                if (features[35] <= 8.50000000f) {
                  if (features[36] <= 5.00000000f) {
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
                    if (features[28] <= 14.50000000f) {
                      if (features[45] <= 10.00000000f) {
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
                } else {
                  values[0] = 0;
                  values[1] = 5;
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
                if (features[18] <= 13.50000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 31;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
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
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              }
            } else {
              if (features[43] <= 3.50000000f) {
                if (features[29] <= 13.00000000f) {
                  if (features[19] <= 15.00000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 27;
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
                    values[7] = 0;
                    values[8] = 6;
                    values[9] = 0;
                  }
                } else {
                  if (features[28] <= 12.50000000f) {
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
                    if (features[10] <= 11.50000000f) {
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
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 10;
                    }
                  }
                }
              } else {
                if (features[53] <= 3.50000000f) {
                  if (features[44] <= 14.00000000f) {
                    if (features[60] <= 11.00000000f) {
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
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  } else {
                    values[0] = 0;
                    values[1] = 7;
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
                  if (features[22] <= 0.50000000f) {
                    if (features[26] <= 10.50000000f) {
                      if (features[37] <= 1.50000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 66;
                        values[3] = 0;
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 0;
                      } else {
                        if (features[45] <= 8.00000000f) {
                          if (features[35] <= 11.50000000f) {
                            values[0] = 0;
                            values[1] = 0;
                            values[2] = 13;
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
                            values[7] = 0;
                            values[8] = 2;
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
                          values[8] = 4;
                          values[9] = 0;
                        }
                      }
                    } else {
                      if (features[52] <= 11.50000000f) {
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
                    if (features[61] <= 9.50000000f) {
                      if (features[10] <= 8.50000000f) {
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
                      } else {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 0;
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 6;
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
              }
            }
          }
        }
      } else {
        if (features[54] <= 1.50000000f) {
          if (features[5] <= 3.50000000f) {
            if (features[25] <= 0.50000000f) {
              if (features[38] <= 1.50000000f) {
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
              } else {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 6;
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
              values[4] = 80;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[33] <= 9.50000000f) {
              if (features[20] <= 13.00000000f) {
                if (features[10] <= 14.50000000f) {
                  if (features[50] <= 7.00000000f) {
                    if (features[13] <= 9.50000000f) {
                      if (features[5] <= 7.00000000f) {
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
                      } else {
                        if (features[28] <= 11.50000000f) {
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
                      }
                    } else {
                      if (features[19] <= 8.00000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 0;
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 11;
                        values[8] = 0;
                        values[9] = 0;
                      } else {
                        if (features[37] <= 14.50000000f) {
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
                          values[4] = 1;
                          values[5] = 0;
                          values[6] = 0;
                          values[7] = 0;
                          values[8] = 0;
                          values[9] = 0;
                        }
                      }
                    }
                  } else {
                    if (features[37] <= 10.00000000f) {
                      if (features[22] <= 1.50000000f) {
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
                      } else {
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
                      }
                    } else {
                      if (features[59] <= 8.50000000f) {
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
                      } else {
                        if (features[53] <= 12.00000000f) {
                          values[0] = 2;
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
                          values[5] = 1;
                          values[6] = 0;
                          values[7] = 0;
                          values[8] = 0;
                          values[9] = 0;
                        }
                      }
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
                if (features[53] <= 4.00000000f) {
                  if (features[19] <= 15.50000000f) {
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
          }
        } else {
          if (features[30] <= 2.00000000f) {
            if (features[28] <= 8.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 46;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              if (features[37] <= 6.00000000f) {
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
              } else {
                if (features[59] <= 6.00000000f) {
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
    }
  }

  return argmax(10, values);
}

int predict_9(float features[]) {
  int values[10];
  
  if (features[61] <= 0.50000000f) {
    if (features[26] <= 9.50000000f) {
      if (features[36] <= 12.50000000f) {
        if (features[52] <= 2.50000000f) {
          values[0] = 0;
          values[1] = 0;
          values[2] = 0;
          values[3] = 0;
          values[4] = 0;
          values[5] = 0;
          values[6] = 0;
          values[7] = 4;
          values[8] = 0;
          values[9] = 0;
        } else {
          if (features[30] <= 2.00000000f) {
            if (features[43] <= 15.00000000f) {
              if (features[34] <= 0.50000000f) {
                if (features[35] <= 9.00000000f) {
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
                  values[5] = 1;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              } else {
                if (features[53] <= 1.50000000f) {
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
              if (features[58] <= 3.50000000f) {
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
                if (features[49] <= 1.50000000f) {
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
                  values[2] = 1;
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
            if (features[2] <= 2.00000000f) {
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
            } else {
              values[0] = 3;
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
        if (features[52] <= 10.50000000f) {
          if (features[10] <= 1.50000000f) {
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
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 115;
            values[8] = 0;
            values[9] = 0;
          }
        } else {
          if (features[45] <= 1.50000000f) {
            if (features[9] <= 2.00000000f) {
              values[0] = 0;
              values[1] = 6;
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
              values[5] = 1;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          } else {
            if (features[34] <= 1.50000000f) {
              if (features[60] <= 2.00000000f) {
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
                if (features[7] <= 0.50000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 7;
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
                  values[5] = 1;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              }
            } else {
              if (features[53] <= 1.50000000f) {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 9;
                values[8] = 0;
                values[9] = 0;
              } else {
                if (features[50] <= 9.50000000f) {
                  if (features[21] <= 7.50000000f) {
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
                  } else {
                    if (features[26] <= 1.00000000f) {
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
                      if (features[27] <= 10.00000000f) {
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
                } else {
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
                }
              }
            }
          }
        }
      }
    } else {
      if (features[33] <= 3.50000000f) {
        if (features[58] <= 6.50000000f) {
          if (features[12] <= 14.00000000f) {
            if (features[42] <= 1.00000000f) {
              if (features[20] <= 1.50000000f) {
                if (features[34] <= 6.00000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
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
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 2;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              } else {
                if (features[12] <= 8.50000000f) {
                  if (features[44] <= 9.50000000f) {
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
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 14;
                  }
                } else {
                  if (features[43] <= 9.00000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 3;
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
              }
            } else {
              if (features[50] <= 4.50000000f) {
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
                values[8] = 5;
                values[9] = 0;
              }
            }
          } else {
            values[0] = 0;
            values[1] = 5;
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
          if (features[10] <= 15.50000000f) {
            if (features[43] <= 2.50000000f) {
              if (features[5] <= 7.00000000f) {
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
                values[5] = 4;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
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
                values[7] = 0;
                values[8] = 2;
                values[9] = 0;
              } else {
                if (features[2] <= 5.50000000f) {
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
            }
          } else {
            if (features[59] <= 12.50000000f) {
              if (features[28] <= 15.50000000f) {
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
            } else {
              values[0] = 0;
              values[1] = 0;
              values[2] = 0;
              values[3] = 0;
              values[4] = 0;
              values[5] = 43;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            }
          }
        }
      } else {
        if (features[44] <= 12.00000000f) {
          if (features[35] <= 1.50000000f) {
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
            if (features[21] <= 0.50000000f) {
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
            } else {
              if (features[21] <= 1.50000000f) {
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
              } else {
                if (features[13] <= 7.50000000f) {
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
                } else {
                  if (features[58] <= 12.00000000f) {
                    values[0] = 0;
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
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
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 1;
                    values[8] = 0;
                    values[9] = 0;
                  }
                }
              }
            }
          }
        } else {
          if (features[50] <= 13.00000000f) {
            if (features[37] <= 3.50000000f) {
              if (features[35] <= 11.00000000f) {
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
                values[5] = 1;
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
              values[4] = 68;
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
            values[5] = 1;
            values[6] = 0;
            values[7] = 0;
            values[8] = 0;
            values[9] = 0;
          }
        }
      }
    }
  } else {
    if (features[45] <= 0.50000000f) {
      if (features[34] <= 8.50000000f) {
        if (features[27] <= 8.50000000f) {
          values[0] = 0;
          values[1] = 0;
          values[2] = 54;
          values[3] = 0;
          values[4] = 0;
          values[5] = 0;
          values[6] = 0;
          values[7] = 0;
          values[8] = 0;
          values[9] = 0;
        } else {
          if (features[62] <= 0.50000000f) {
            if (features[28] <= 10.00000000f) {
              if (features[28] <= 3.00000000f) {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
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
                values[6] = 0;
                values[7] = 0;
                values[8] = 2;
                values[9] = 0;
              }
            } else {
              if (features[19] <= 10.00000000f) {
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
                values[1] = 7;
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
            if (features[63] <= 0.50000000f) {
              values[0] = 0;
              values[1] = 0;
              values[2] = 21;
              values[3] = 0;
              values[4] = 0;
              values[5] = 0;
              values[6] = 0;
              values[7] = 0;
              values[8] = 0;
              values[9] = 0;
            } else {
              if (features[27] <= 14.50000000f) {
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
      } else {
        if (features[20] <= 12.50000000f) {
          if (features[5] <= 3.00000000f) {
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
          } else {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            values[3] = 0;
            values[4] = 0;
            values[5] = 0;
            values[6] = 0;
            values[7] = 0;
            values[8] = 2;
            values[9] = 0;
          }
        } else {
          if (features[61] <= 12.00000000f) {
            values[0] = 0;
            values[1] = 13;
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
            values[2] = 1;
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
      if (features[34] <= 7.50000000f) {
        if (features[51] <= 11.50000000f) {
          if (features[46] <= 5.50000000f) {
            if (features[26] <= 3.50000000f) {
              if (features[61] <= 1.50000000f) {
                if (features[35] <= 2.00000000f) {
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
                } else {
                  if (features[43] <= 3.50000000f) {
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
                    values[1] = 0;
                    values[2] = 0;
                    values[3] = 0;
                    values[4] = 0;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 3;
                    values[9] = 0;
                  }
                }
              } else {
                if (features[35] <= 12.00000000f) {
                  if (features[29] <= 13.50000000f) {
                    if (features[11] <= 14.50000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 37;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    } else {
                      if (features[53] <= 15.00000000f) {
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
                  } else {
                    if (features[51] <= 4.50000000f) {
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
                    } else {
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
                    }
                  }
                } else {
                  if (features[53] <= 15.50000000f) {
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
              if (features[62] <= 3.00000000f) {
                if (features[35] <= 11.50000000f) {
                  if (features[43] <= 0.50000000f) {
                    if (features[21] <= 8.00000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 19;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    } else {
                      if (features[19] <= 14.00000000f) {
                        if (features[33] <= 2.50000000f) {
                          values[0] = 0;
                          values[1] = 0;
                          values[2] = 0;
                          values[3] = 0;
                          values[4] = 0;
                          values[5] = 0;
                          values[6] = 0;
                          values[7] = 0;
                          values[8] = 0;
                          values[9] = 26;
                        } else {
                          values[0] = 2;
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
                        if (features[28] <= 9.50000000f) {
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
                        } else {
                          if (features[44] <= 5.00000000f) {
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
                            values[4] = 0;
                            values[5] = 0;
                            values[6] = 0;
                            values[7] = 0;
                            values[8] = 0;
                            values[9] = 3;
                          }
                        }
                      }
                    }
                  } else {
                    if (features[50] <= 4.00000000f) {
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
                    } else {
                      if (features[44] <= 9.00000000f) {
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
                } else {
                  if (features[51] <= 0.50000000f) {
                    if (features[20] <= 6.00000000f) {
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
                    } else {
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
                    }
                  } else {
                    if (features[30] <= 3.50000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 24;
                      values[9] = 0;
                    } else {
                      if (features[21] <= 11.00000000f) {
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
                }
              } else {
                if (features[12] <= 12.00000000f) {
                  if (features[12] <= 2.50000000f) {
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
                    if (features[2] <= 3.00000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 2;
                      values[9] = 0;
                    } else {
                      if (features[29] <= 14.00000000f) {
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
                  values[0] = 0;
                  values[1] = 14;
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
            if (features[45] <= 12.50000000f) {
              if (features[20] <= 0.50000000f) {
                if (features[58] <= 7.00000000f) {
                  values[0] = 3;
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
                  values[5] = 2;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              } else {
                if (features[18] <= 5.00000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 19;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                } else {
                  if (features[5] <= 9.00000000f) {
                    if (features[25] <= 3.50000000f) {
                      if (features[21] <= 6.50000000f) {
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
                        values[9] = 47;
                      }
                    } else {
                      if (features[37] <= 13.50000000f) {
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
                        values[5] = 3;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 0;
                      }
                    }
                  } else {
                    if (features[62] <= 2.00000000f) {
                      if (features[22] <= 3.00000000f) {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 0;
                        values[4] = 0;
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
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 1;
                      }
                    } else {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 8;
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
              if (features[10] <= 2.00000000f) {
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
                if (features[57] <= 2.50000000f) {
                  if (features[21] <= 15.50000000f) {
                    if (features[57] <= 1.50000000f) {
                      if (features[4] <= 10.50000000f) {
                        if (features[25] <= 1.00000000f) {
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
                          values[5] = 0;
                          values[6] = 0;
                          values[7] = 0;
                          values[8] = 0;
                          values[9] = 2;
                        }
                      } else {
                        if (features[38] <= 0.50000000f) {
                          if (features[12] <= 6.50000000f) {
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
                            values[3] = 7;
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
                          values[3] = 37;
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
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 1;
                    }
                  } else {
                    if (features[57] <= 0.50000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 3;
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
                } else {
                  if (features[27] <= 15.50000000f) {
                    if (features[35] <= 6.00000000f) {
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
                      values[5] = 1;
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
                    values[5] = 2;
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
          if (features[27] <= 12.50000000f) {
            if (features[58] <= 4.00000000f) {
              if (features[46] <= 6.50000000f) {
                if (features[62] <= 3.00000000f) {
                  if (features[17] <= 1.00000000f) {
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
                  } else {
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
                  }
                } else {
                  if (features[10] <= 5.50000000f) {
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
              } else {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 6;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
            } else {
              if (features[10] <= 12.50000000f) {
                if (features[36] <= 14.50000000f) {
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
                }
              } else {
                values[0] = 0;
                values[1] = 0;
                values[2] = 28;
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
            if (features[53] <= 6.50000000f) {
              if (features[61] <= 13.00000000f) {
                if (features[13] <= 14.00000000f) {
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
                values[5] = 0;
                values[6] = 3;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
            } else {
              if (features[62] <= 15.50000000f) {
                if (features[45] <= 4.50000000f) {
                  if (features[21] <= 0.50000000f) {
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
                  } else {
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
                  }
                } else {
                  if (features[44] <= 2.00000000f) {
                    if (features[50] <= 4.00000000f) {
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
                      if (features[21] <= 13.50000000f) {
                        if (features[4] <= 14.50000000f) {
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
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 0;
                        values[9] = 1;
                      }
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
                    values[8] = 39;
                    values[9] = 0;
                  }
                }
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
      } else {
        if (features[36] <= 0.50000000f) {
          if (features[3] <= 4.50000000f) {
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
            if (features[13] <= 1.50000000f) {
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
              if (features[18] <= 13.50000000f) {
                if (features[58] <= 8.50000000f) {
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
                }
              } else {
                values[0] = 95;
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
          if (features[42] <= 8.50000000f) {
            if (features[5] <= 15.50000000f) {
              if (features[21] <= 8.50000000f) {
                if (features[37] <= 15.50000000f) {
                  if (features[43] <= 1.00000000f) {
                    if (features[28] <= 1.50000000f) {
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
                    } else {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 16;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  } else {
                    if (features[51] <= 7.50000000f) {
                      if (features[50] <= 1.50000000f) {
                        if (features[20] <= 5.00000000f) {
                          values[0] = 0;
                          values[1] = 0;
                          values[2] = 0;
                          values[3] = 0;
                          values[4] = 0;
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
                          values[6] = 0;
                          values[7] = 0;
                          values[8] = 3;
                          values[9] = 0;
                        }
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
                    }
                  }
                } else {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 7;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 0;
                }
              } else {
                if (features[44] <= 8.50000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 0;
                  values[9] = 20;
                } else {
                  if (features[20] <= 13.50000000f) {
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
                  } else {
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
                  }
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
                values[7] = 0;
                values[8] = 0;
                values[9] = 1;
              } else {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 13;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              }
            }
          } else {
            if (features[62] <= 0.50000000f) {
              if (features[50] <= 8.50000000f) {
                if (features[45] <= 7.00000000f) {
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
                  if (features[41] <= 2.00000000f) {
                    if (features[35] <= 11.50000000f) {
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
                    } else {
                      if (features[3] <= 7.50000000f) {
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
                        values[5] = 1;
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
                    values[4] = 32;
                    values[5] = 0;
                    values[6] = 0;
                    values[7] = 0;
                    values[8] = 0;
                    values[9] = 0;
                  }
                }
              } else {
                if (features[20] <= 4.50000000f) {
                  if (features[43] <= 7.00000000f) {
                    if (features[43] <= 1.00000000f) {
                      if (features[44] <= 4.00000000f) {
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
                      } else {
                        values[0] = 0;
                        values[1] = 0;
                        values[2] = 0;
                        values[3] = 0;
                        values[4] = 0;
                        values[5] = 0;
                        values[6] = 0;
                        values[7] = 0;
                        values[8] = 2;
                        values[9] = 0;
                      }
                    } else {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 7;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  } else {
                    if (features[49] <= 0.50000000f) {
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
                      values[4] = 7;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 0;
                      values[9] = 0;
                    }
                  }
                } else {
                  if (features[29] <= 9.00000000f) {
                    if (features[61] <= 9.00000000f) {
                      values[0] = 0;
                      values[1] = 0;
                      values[2] = 0;
                      values[3] = 0;
                      values[4] = 0;
                      values[5] = 0;
                      values[6] = 0;
                      values[7] = 0;
                      values[8] = 20;
                      values[9] = 0;
                    } else {
                      if (features[11] <= 14.00000000f) {
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
                  } else {
                    if (features[43] <= 11.00000000f) {
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
                      if (features[36] <= 12.00000000f) {
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
              if (features[21] <= 4.50000000f) {
                values[0] = 0;
                values[1] = 0;
                values[2] = 0;
                values[3] = 0;
                values[4] = 0;
                values[5] = 0;
                values[6] = 103;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;
              } else {
                if (features[20] <= 15.00000000f) {
                  values[0] = 0;
                  values[1] = 0;
                  values[2] = 0;
                  values[3] = 0;
                  values[4] = 0;
                  values[5] = 0;
                  values[6] = 0;
                  values[7] = 0;
                  values[8] = 15;
                  values[9] = 0;
                } else {
                  values[0] = 0;
                  values[1] = 5;
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
      }
    }
  }

  return argmax(10, values);
}

void predict(float features[N_FEATURES], int *output) {
#ifdef __SYNTHESIS__
  #pragma HLS INTERFACE ap_ctrl_none port=return
  #pragma HLS INTERFACE m_axi depth=64 offset=slave port=features
  #pragma HLS INTERFACE s_axilite port=output
#endif

  int values[10] = { 0 };

values[predict_0(features)]++;
values[predict_1(features)]++;
values[predict_2(features)]++;
values[predict_3(features)]++;
values[predict_4(features)]++;
values[predict_5(features)]++;
values[predict_6(features)]++;
values[predict_7(features)]++;
values[predict_8(features)]++;
values[predict_9(features)]++;

  *output = argmax(10, values);
}
