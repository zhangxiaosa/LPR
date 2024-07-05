
#include <stdio.h>

int fn2(int p1_int, int p2_int) { return p1_int - p2_int; }

volatile int m[5][8];

int fn3(p1_int) {
  for (;;) {
    for (k = 0; k >= -27; k = k - 6)
      for (l = 0; l < 5; l++)
        p1_int = fn2(p1_int, p1_int);
    p1_int || m[2][5];
  }
}

int main() { return 0; }
