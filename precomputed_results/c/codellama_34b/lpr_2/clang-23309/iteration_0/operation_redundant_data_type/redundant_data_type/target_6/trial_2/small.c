
#include <stdio.h>

void fn1(unsigned int p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }

int fn5(int p1, int p2) { return p2; }

int fn6(int p1, int p2) { return p1 - p2; }

int main() {
  fn13();
  fn1(fn2(fn4(fn6(1L, 250UL), 0xECL), 1), 0);
  return 0;
}

int fn13() {
  for (int w = 3; w; w -= 1) {
    if (fn2(fn4(fn6(1L, 250UL), 0xECL), 1) & 1UL)
      break;
  }
  return 3;
}
