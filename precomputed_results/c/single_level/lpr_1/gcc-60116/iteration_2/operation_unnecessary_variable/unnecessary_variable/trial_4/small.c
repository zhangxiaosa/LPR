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
unsigned ap;
int aq;

long fn12() {
  short at = 1L;
  int au[5][2][10] = {0};
  unsigned tmp1 = fn8(~fn4(fn3(aj, fn2(ap, at)) != 0, 0), ak) && 0x57L;
  unsigned tmp2 = fn7(4UL, fn6(aq, fn5(ai, tmp1)));
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= tmp2) {
        v = am;
        ag[3] = tmp1;
      } else {
        ao = 0; // Optimized out
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