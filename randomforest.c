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
  
  if (features[3] <= 0.75) {
    values[0] = 38; 
    values[1] = 0; 
    values[2] = 0; 
  } else {
    if (features[2] <= 4.8500001430511475) {
      if (features[3] <= 1.699999988079071) {
        values[0] = 0; 
        values[1] = 34; 
        values[2] = 0; 
      } else {
        if (features[1] <= 3.100000023841858) {
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
      if (features[0] <= 6.599999904632568) {
        values[0] = 0; 
        values[1] = 0; 
        values[2] = 24; 
      } else {
        if (features[2] <= 5.200000047683716) {
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
  
  if (features[3] <= 0.75) {
    values[0] = 40; 
    values[1] = 0; 
    values[2] = 0; 
  } else {
    if (features[3] <= 1.75) {
      if (features[2] <= 4.950000047683716) {
        if (features[2] <= 4.450000047683716) {
          values[0] = 0; 
          values[1] = 19; 
          values[2] = 0; 
        } else {
          if (features[3] <= 1.6500000357627869) {
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
        if (features[3] <= 1.600000023841858) {
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
      if (features[0] <= 5.950000047683716) {
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
  
  if (features[0] <= 5.450000047683716) {
    if (features[3] <= 0.800000011920929) {
      values[0] = 38; 
      values[1] = 0; 
      values[2] = 0; 
    } else {
      values[0] = 0; 
      values[1] = 2; 
      values[2] = 0; 
    }
  } else {
    if (features[2] <= 4.950000047683716) {
      if (features[3] <= 0.6000000014901161) {
        values[0] = 2; 
        values[1] = 0; 
        values[2] = 0; 
      } else {
        if (features[3] <= 1.699999988079071) {
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

int predict(float features[]) {
  int values[3] = { 0 };

  values[predict_0(features)]++;
values[predict_1(features)]++;
values[predict_2(features)]++;

  return argmax(3, values);
}
