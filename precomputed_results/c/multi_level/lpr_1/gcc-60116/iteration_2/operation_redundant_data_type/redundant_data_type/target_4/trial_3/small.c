#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }

int fn5(int p1, int p2) { return 0x41AEA787; }

unsigned int fn6(unsigned int p1, unsigned int p2) { return 0xDC6F3D13; }

long long fn8(long p1, long long p2) { return p1 + p2; }

unsigned int f;
unsigned int w = 0xDC6F3D13;
unsigned int ag[4];
unsigned int ah;
unsigned int ai;
unsigned int ak;
unsigned int al;
unsigned int am = 0x41AEA787;
unsigned int ao;
unsigned int ap;
unsigned int aq;

unsigned int fn12() {
  unsigned int au[5][2][10];
  for (ak = 0; ak <= 3; ak += 1) {
    if (w >= (fn6(aq, fn5(ai, au[4][1][5] = fn8(~(fn2(ap, 1L) != 0), ak) && 0x57)) > 2)) {
      f = am;
      ag[3] = au[4][1][5];
    } else {
      ao = au[4][1][5];
    }
  }
  return al;
}

int main() {
  fn12();
  printf("checksum = %u\n", f);
  return 0;
}