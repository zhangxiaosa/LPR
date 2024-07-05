#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }

long fn3(long p1, long p2) { return p2; }

char fn5(char p1, int p2) { return 0x41AEA787L; }

unsigned int fn6(unsigned int p1, unsigned int p2) { return 0xDC6F3D13L; }

unsigned int fn7(unsigned int p1, unsigned int p2) { return p1; }

unsigned int f;

unsigned int w = 0xDC6F3D13L;

long ag[1];

int ah;

char ai;

long aj;

long ak;

unsigned int al;

int am = 0x41AEA787L;

int ao;

unsigned int ap;

int aq;

int fn12() {
  int au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (fn7(4, fn6(aq, fn5(ai, au[4][1][5] = fn2(fn3(aj, fn2(ap, 1)), ak) && 0x57L))) > 2)) {
        f = am;
        ag[0] = au[4][1][5];
      } else
        ao = au[4][1][5];
    return al;
  }
}

int main() {
  fn12();
  printf("checksum = %X\n", f);
  return 0;
}
