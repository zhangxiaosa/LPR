#include <stdio.h>

short fn2(short p1, short p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(long p1, long p2) { return p2; }
char fn4(char p1, char p2) { return p1; }
unsigned fn6(unsigned p1, unsigned p2) { return p2; }
unsigned fn7(unsigned p1, unsigned p2) { return p1; }
long long fn8(long long p1, long long p2) { return p1 + p2; }

int v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
long ak;
unsigned al;
unsigned am = 0x41AEA787L;
char an;
int ao;
unsigned ap;
unsigned aq;

unsigned fn12() {
  char as = 4UL;
  short at = 1L;
  int au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (fn7(as, fn6(aq, au[4][1][5] = fn8(~fn4(fn3(ak, fn2(ap, at)) != 0, an), ak) && 0x57L)) > 2U) {
        v = am;
        ag[3] = au[4][1][5];
      } else
        ao = au[4][1][5];
    return al;
  }
}

int main() {
  fn12();
  printf("checksum = %u\n", v);
  return 0;
}