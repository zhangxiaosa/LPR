#include <iostream>

short g;

int main() {
  short n = g;
  int j = 0x24F96B7BL;
  unsigned k;

  while (j > 0) {
    j = j - 1;
    int l = 1L;
    int m = j;

    while (k > 0) {
      k = k >> l;

      if (n) {
        k = k << m;
      }
    }
  }

  return 0;
}