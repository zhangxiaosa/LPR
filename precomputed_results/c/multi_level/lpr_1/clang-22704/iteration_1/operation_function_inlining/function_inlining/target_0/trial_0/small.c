int fn1() {
  if (f) {
    f = 6;
    if (f) {
      f = 6;
      if (f) {
        f = 6;
        if (f) {
          f = 6;
          if (f) {
            f = 6;
            if (f) {
              f = 6;
              if (f) {
                f = 6;
                // Continue this nested structure for every call to fn1()
                // until the maximum function call depth is reached.
              }
            }
          }
        }
      }
    }
    int j = 0xEEACFBBF;
    return j;
  }
  if (f) {
    f = 6;
    if (f) {
      f = 6;
      if (f) {
        f = 6;
        if (f) {
          f = 6;
          if (f) {
            f = 6;
            if (f) {
              f = 6;
              // Continue this nested structure for every call to fn1()
              // until the maximum function call depth is reached.
            }
          }
        }
      }
    }
    int j;
    return j;
  }
}

int main() {}