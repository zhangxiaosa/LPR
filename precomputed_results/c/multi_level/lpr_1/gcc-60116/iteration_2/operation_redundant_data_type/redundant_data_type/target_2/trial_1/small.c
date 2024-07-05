#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }

int fn5(int p1, int p2) { return 0x41AEA787L; }

unsigned fn6(unsigned p1, unsigned p2) { return 0xDC6F3D13L; }

int fn8(int p1, long long p2) { return p1 + p2; }

unsigned f;
unsigned w = 0xDC6F3D13L;
int ah;
int ai;
int al;
unsigned am = 0x41AEA787L;
int ao;
unsigned ap;
int aq;

int fn12() {
  int au[5][2][10];
  for (;;)
  {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (fn6(aq, fn5(ai, au[4][1][5] = fn8(~(fn2(ap, 1) != 0), ak) && 0x57)) > 2))
      {
        f = (unsigned)am;
      }
      else
      {
        ao = au[4][1][5];
      }
    return al;
  }
}

int main() {
  fn12();
  printf("checksum = %X\n", f);
  return 0;
}