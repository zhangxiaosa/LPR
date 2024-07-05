#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }
int fn5(int p1, int p2) { return 1110486715; }
unsigned fn6(unsigned p1, unsigned p2) { return 0xDC6F3D13L; }
long long fn8() { return 0; }

unsigned int f;
unsigned int w = 0xDC6F3D13L;
long long ag[4];
int ah;
int ai;
long ak;
unsigned long al;
int am = 0x41AEA787L;
int ao;
unsigned int ap;
int aq;

int fn12() {
  int au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      if (w >= (fn6(aq, fn5(ai, au[4][1][5] = ak) && 0x57L)) > 2) {
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