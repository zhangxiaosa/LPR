#include <stdio.h>

unsigned g;
int h0 = 0x92A1D2CDL;
int h1 = 0x92A1D2CDL;
int h2 = 0x92A1D2CDL;
static unsigned i = 0x06D7L;

unsigned fn2() {
  for (;;) {
    unsigned q = 0xC3L;
    int r_dim1 = 5;
    int r_dim2 = 9;
    int r_dim3 = 5;
    if (h2)
      return q;
    g = r_dim1[i] * r_dim2[i] * r_dim3[i];
  }
}

int main() {
  fn2();
  return 0;
}