#include <stdio.h>

void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }
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
long long ag_3;
short ah;
char ai;
long aj;
long ak;
unsigned al;
int am = 0x41AEA787L;
char an;
int ao;
unsigned ap;
int aq;

long fn12() {
  char as = 4UL;
  short at = 1L;
  int au_4_1_5;
  for (ak = 0;;) {
    if (w >= (fn7(as, fn6(aq, fn5(ai, au_4_1_5 = fn8(~fn4(fn3(aj, fn2(ap, at)) != 0, an), ak) && 0x57L))) > 2)) {
      v = am;
      ag_3 = au_4_1_5;
    } else {
      ao = au_4_1_5;
    }

    if (w >= (fn7(as, fn6(aq, fn5(ai, au_4_1_5 = fn8(~fn4(fn3(aj, fn2(ap, at)) != 0, an), ak) && 0x57L))) > 2)) {
      v = am;
      ag_3 = au_4_1_5;
    } else {
      ao = au_4_1_5;
    }

    if (w >= (fn7(as, fn6(aq, fn5(ai, au_4_1_5 = fn8(~fn4(fn3(aj, fn2(ap, at)) != 0, an), ak) && 0x57L))) > 2)) {
      v = am;
      ag_3 = au_4_1_5;
    } else {
      ao = au_4_1_5;
    }

    if (w >= (fn7(as, fn6(aq, fn5(ai, au_4_1_5 = fn8(~fn4(fn3(aj, fn2(ap, at)) != 0, an), ak) && 0x57L))) > 2)) {
      v = am;
      ag_3 = au_4_1_5;
    } else {
      ao = au_4_1_5;
    }

    return al;
  }
}

int main() {
  fn12();
  q = v;
  fn1(q, 0);
  return 0;
}