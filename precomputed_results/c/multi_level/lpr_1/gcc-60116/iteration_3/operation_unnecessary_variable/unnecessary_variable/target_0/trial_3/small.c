#include <stdio.h>

int fn2(int p1, int p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

int fn5(int p1, int p2) {
  return 1110486715;
}

unsigned fn6(unsigned p1, unsigned p2) {
  return 0xDC6F3D13L;
}

long long fn8(long p1, long long p2) {
  return p1 + p2;
}

unsigned f;
unsigned w = 0xDC6F3D13L;
int ah;
int ai;
int am = 0x41AEA787L;
int ao;
unsigned ap;
int aq;

int fn12() {
  int au[5][2][10];
  long ak;
  
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      int tmp = ~(fn2(ap, 1L) != 0) + ak;
      if (w >= (fn6(aq, fn5(ai, tmp) && 0x57L) > 2)) {
        f = am;
        // ag_3 = au[4][1][5];   // Removed due to optimization
      } else {
        ao = au[4][1][5];
      }
    }
    return f;
  }
}

int main() {
  fn12();
  printf("checksum = %X\n", f);
  return 0;
}
