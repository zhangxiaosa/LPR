
#include <stdio.h>

volatile int m[5][8];

int fn3(int* p1) {
  int o = *p1;
  for (;;) {
    for (int l = 0; l < 5; l++)
      for (int k = 0; k >= -27; k = k - 6)
        *p1 = *p1 - o;
    *p1 || m[2][5];
  }
}

int main() {
  int x = 0;
  fn3(&x);
  return 0;
}

