#include <stdio.h>

unsigned q;
unsigned w = 0xDC6F3D13L;
long long ag[4];
long aj;
long ak;
unsigned al;
unsigned am = 0x41AEA787L;
unsigned ap;
unsigned aq;

long fn2(int p1, int p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

long fn3(long p1, long p2) {
  return p2;
}

unsigned fn6(unsigned p1, unsigned p2) {
  return p2;
}

unsigned fn7(unsigned p1, unsigned p2) {
  return p1;
}

long long fn8(long p1, long long p2) {
  return p1 + p2;
}

int fn12() {
  int au[5][2][10];
  for (ak = 0;;) {
    for (int ah = 0; ah <= 3; ah += 1) {
      if (w >= (fn7(4UL, fn6(aq, fn5(ai, au[4][1][5] =
                                                fn8(~(fn3(aj, fn2(ap, 1L)) != 0), ak) && 0x57L))) > 2)) {
        q = am;
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
  printf("checksum = %u\n", q);
  return 0;
}