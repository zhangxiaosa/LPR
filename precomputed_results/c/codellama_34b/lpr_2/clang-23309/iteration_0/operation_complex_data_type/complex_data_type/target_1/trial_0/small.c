
#include <stdio.h>

int fn1(unsigned p1, int p2) {
  printf("checksum = %X\n", p1);
}

int fn2(int p1, int p2) {
  return p1 - p2;
}

unsigned char fn4(unsigned p1, unsigned p2) {
  return p1;
}

int fn5(int p1, int p2) {
  return p2;
}

int fn6(int p1, int p2) {
  return p1 - p2;
}

int main() {
  int p;
  int t;
  long v;
  short w;
  int ab;
  short ac = 1L;

  p = v;
  fn1(p, ab);

  for (w = 3; w; w -= 1) {
    if (fn2(fn4(fn6(ab, ac), 0xECL), t) & 1UL)
      v = 1UL;
  }

  return 0;
}
