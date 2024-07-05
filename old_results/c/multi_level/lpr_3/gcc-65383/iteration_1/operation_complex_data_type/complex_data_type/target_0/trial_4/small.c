#include <stdio.h>

int g;
int h2 = 0x92A1D2CDL;
static int i = 0x06D7L;

int fn2() {
  int r_dim1 = 5;
  int r_dim2 = 9;
  int r_dim3 = 5;
  int r_flat[r_dim1 * r_dim2 * r_dim3];

  for (;;) {
    if (h2)
      return 0xC3L;
    g = r_flat[i * (r_dim2 * r_dim3) + i * r_dim3 + i];
  }
}

int main() {
  fn2();
}