#include <stdbool.h>

int fn3(int fn3_p1, int p2) {
  return fn3_p1 && p2 && fn3_p1 > 2147483647 - p2 ||
         fn3_p1 < 0 && p2 < 0 && fn3_p1
             ? fn3_p1
             : fn3_p1 + p2;
}

unsigned n;
int o;

int main() {
  int temp;

  if (0x4F92L < (temp = o == 0 ? o : o % o, 6)) {
  }
  else if (o <= 0xE3L) {
  }
  else if (temp) {
    n = fn3(n, 3); // Unrolled iteration 1
    temp = o == 0 ? o : o % o;

    if (0x4F92L < temp) {
    }
    else if (o <= 0xE3L) {
    }
    else if (temp) {
      n = fn3(n, 3); // Unrolled iteration 2
      temp = o == 0 ? o : o % o;

      if (0x4F92L < temp) {
      }
      else if (o <= 0xE3L) {
      }
      else if (temp) {
        n = fn3(n, 3); // Unrolled iteration 3
        temp = o == 0 ? o : o % o;

        if (0x4F92L < temp) {
        }
        else if (o <= 0xE3L) {
        }
        else if (temp) {
          n = fn3(n, 3); // Unrolled iteration 4
          temp = o == 0 ? o : o % o;

          if (0x4F92L < temp) {
          }
          else if (o <= 0xE3L) {
          }
          else if (temp) {
            n = fn3(n, 3); // Unrolled iteration 5
            temp = o == 0 ? o : o % o;

            if (0x4F92L < temp) {
            }
            else if (o <= 0xE3L) {
            }
            else if (temp) {
              n = fn3(n, 3); // Unrolled iteration 6
              temp = o == 0 ? o : o % o;

              if (0x4F92L < temp) {
              }
              else if (o <= 0xE3L) {
              }
              else if (temp) {
                n = fn3(n, 3); // Unrolled iteration 7
                temp = o == 0 ? o : o % o;

                if (0x4F92L < temp) {
                }
                else if (o <= 0xE3L) {
                }
                else if (temp) {
                  n = fn3(n, 3); // Unrolled iteration 8
                  temp = o == 0 ? o : o % o;

                  if (0x4F92L < temp) {
                  }
                  else if (o <= 0xE3L) {
                  }
                  else if (temp) {
                    n = fn3(n, 3); // Unrolled iteration 9
                    temp = o == 0 ? o : o % o;

                    if (0x4F92L < temp) {
                    }
                    else if (o <= 0xE3L) {
                    }
                    else if (temp) {
                      n = fn3(n, 3); // Unrolled iteration 10
                      temp = o == 0 ? o : o % o;

                      if (0x4F92L < temp) {
                      }
                      else if (o <= 0xE3L) {
                      }
                      else if (temp) {
                        n = fn3(n, 3); // Unrolled iteration 11
                        temp = o == 0 ? o : o % o;

                        if (0x4F92L < temp) {
                        }
                        else if (o <= 0xE3L) {
                        }
                        else if (temp) {
                          n = fn3(n, 3); // Unrolled iteration 12
                          temp = o == 0 ? o : o % o;

                          if (0x4F92L < temp) {
                          }
                          else if (o <= 0xE3L) {
                          }
                          else if (temp) {
                            break;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  return 0;
}