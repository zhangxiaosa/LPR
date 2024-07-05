#include <stdio.h>

short fn2(short p1, short p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(long p1, long p2) { return p2; }
char fn4(char p1, char p2) { return p1; }
char fn5(char p1, int p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p2; }
unsigned fn7(unsigned p1, unsigned p2) { return p1; }
long long fn8(long p1, long long p2) { return p1 + p2; }
unsigned q;
int v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
char ai;
long aj;
long ak;
unsigned al;
int am = 0x41AEA787L;
int ao;
unsigned ap;
int aq;

int au5[5][2][10];
int au52[2][10];
int au5210[10];

long fn12() {
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      if (w >= (fn7(4UL, fn6(aq, fn5(ai, au5210 = fn8(~fn4(fn3(aj, fn2(ap, 1L)) != 0, 0), ak) && 0x57L))) > 2)) {
        v = am;
        ag[3] = au5210;
      } else {
        ao = au5210;
      }
    }
    return al;
  }
}

int main() {
  fn12();
  q = v;
  printf("checksum = %X\n", q);
  return 0;
}