#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }

int fn5(int p1, int p2) { return 0x41AEA787L; }

unsigned fn6(unsigned p1, unsigned p2) { return 0xDC6F3D13L; }

long fn8(int p1, long p2) { return p1 + p2; }

unsigned f;
unsigned w = 0xDC6F3D13L;
int ah;
int ai;
long ak;
unsigned al;
int am = 0x41AEA787L;
int ao;
unsigned ap;
int aq;

long fn12() {
  int au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (fn6(aq, fn5(ai, au[4][1][5] = fn8(~(fn2(ap, 1L) != 0), ak) &&
                                              0x57L)) > 2)) {
        f = am;
        ag[3] = (long)au[4][1][5];
      } else
        ao = (int)au[4][1][5];
    return al;
  }
}

int main() {
  fn12();
  printf("checksum = %lx\n", f);
  return 0;
}