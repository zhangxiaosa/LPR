#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }
int fn5(int p1, int p2) { return 1110486715; }
unsigned fn6(unsigned p1, unsigned p2) { return 0xDC6F3D13L; }
long long fn8(long p1, long long p2) { return p1 + p2; }

unsigned f;
unsigned w = 0xDC6F3D13L;
long long ag_3;
int ah;
int ak;
int am = 0x41AEA787L;
int ao;
unsigned ap;

int fn12() {
  int au[5][2][10];
  unsigned temp1;
  unsigned temp2;

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      temp1 = ~(fn2(ap, 1L) != 0) & ak; // Optimize the expression
      temp2 = fn6(0, fn5(1110486715, au[4][1][5] = temp1 && 0x57L)); // Optimize the expression

      if (w >= (temp2 > 2)) {
        f = am;
        ag_3 = au[4][1][5];
      } else {
        ao = temp1 && 0x57L;
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
