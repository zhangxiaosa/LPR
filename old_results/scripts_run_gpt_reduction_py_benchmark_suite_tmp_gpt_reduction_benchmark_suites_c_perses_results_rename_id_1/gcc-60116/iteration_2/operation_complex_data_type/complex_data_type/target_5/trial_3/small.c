#include <stdio.h>

unsigned int f;
unsigned int w = 0xDC6F3D13L;
long long ag[4];
int ah;
int ai;
unsigned long al;
int am = 0x41AEA787L;
int ao;
unsigned int ap;
int aq;

long long optimized_fn8(long long p1, long long p2) { return p1 + p2; }

unsigned int fn12() {
  int au[5][2][10];
  for (int ak = 0;;) {
    for (int ah = 0; ah <= 3; ah += 1) {
      if (w >= (fn6(aq, fn5(ai, au[4][1][5] = optimized_fn8(~(fn2(ap, 1L) != 0), ak) && 0x57L)) > 2)) {
        f = am;
        ag[3] = au[4][1][5];
      } else {
        ao = au[4][1][5];
      }
    }
    return al;
  }
}

int main() {
  fn12();
  printf("checksum = %X\n", f);
  return 0;
}