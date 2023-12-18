#include<stdio.h>

unsigned g;

int r_dim0 = 5;
int r_dim1 = 9;
int r_dim2 = 5;
int r[r_dim0 * r_dim1 * r_dim2];

int h2 = 0x92A1D2CDL;

int fn1() {
  for (;;) {
    if (h2)
      return 0xC3L;
    g = r[(0x06D7L * r_dim1 * r_dim2) + (0x06D7L * r_dim2) + 0x06D7L];
  }
}

int main() {
  fn1();
}
