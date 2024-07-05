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
void fn10(p1) { q = p1; }
void fn11(long p1, char *p2, int p3) { fn10(p1); }
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
int fn12() {
  unsigned as = 4UL;
  unsigned at = 1L;
  int au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      if (w >= (fn7(as, fn6(0, fn5(ai, au[4][1][5] = fn8(~fn4(fn3(aj, fn2(0, at)) != 0, 0), ak) && 0x57L))) > 2) {
        v = am;
        ag[3] = au[4][1][5];
      }
      else {
        ao = au[4][1][5];
      }
    }
    return al;
  }
}

int main() {
  fn12();
  fn11(v, "g_3", 0);
  fn1(q, 0);
  return 0;
}