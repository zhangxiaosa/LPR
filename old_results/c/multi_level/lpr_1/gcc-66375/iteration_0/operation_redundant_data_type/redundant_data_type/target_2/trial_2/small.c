#include <stdio.h>

char fn2(short p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned u;
unsigned v[1][4];

int fn10(int p1, unsigned p2, unsigned p3, int p4) {
  int d_;
  for (; u < 51U; ++u) {
    int i;
    for (i = 0; i < 9; i++)
      v[0][3] = fn3(4L, d_);
  }
  return d_;
}

short fn11() {
  fn10(6L, 255UL, 1, 0L);
  return 0L;
}

int main() {
  int result = fn11();
  
  printf("d_ = %d\n", result);
  
  return 0;
}