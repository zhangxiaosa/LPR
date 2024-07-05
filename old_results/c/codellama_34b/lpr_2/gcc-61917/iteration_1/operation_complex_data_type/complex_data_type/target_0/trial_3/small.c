
#include <stdio.h>

int k;
unsigned l;
volatile int m[5][8];

int fn3(int p1) {
  int o;
  for (;;) {
    for (; l; l++)
      for (k = 0; k >= -27; k -= 6)
        p1 = o - p1;
    p1 || m[2][5];
  }
}

int main() {
  int i, j;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 8; j++) {
      m[i][j] = i * j;
    }
  }
  fn3(10);
  return 0;
}
