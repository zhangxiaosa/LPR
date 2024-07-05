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

long fn12() {
  char as = 4UL;
  short at = 1L;
  for (long ak = 0;;) {
    for (short ah = 0; ah <= 3; ah += 1)
      if (w >=
          (fn7(as, fn6(fn8(~fn4(fn3(0, fn2(0, at)) != 0, 0), ak) && 0x57L))) > 2)) {
        v = 0x41AEA787L;
        long long ag_3 = 0;
      } else {
        int ao = 0;
      }
    return 0;
  }
}

int main() {
  int av = 0;
  fn12();
  fn11(v, "g_3", av);
  fn1(q, av);
  return 0;
}