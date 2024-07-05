#include <stdio.h>

typedef unsigned int f;
typedef long long g;

void fn1(f p1, int p2) { printf("checksum = %X\n", p1); }
unsigned short fn2(unsigned short p1, unsigned short p2) { return p1 && p2 ? p1 : p1 % p2; }
g fn3(g p1, g p2) { return p2; }
char fn4(char p1, char p2) { return p1; }
char fn5(char p1, int p2) { return p2; }
unsigned int fn6(unsigned int p1, unsigned int p2) { return p2; }
unsigned int fn7(unsigned int p1, unsigned int p2) { return p1; }
g fn8(g p1, g p2) { return p1 + p2; }

f q;
void fn9(f p1) { q = p1; }
void fn10(f p1) { fn9(p1); }
void fn11(g p1, char *p2, int p3) { fn10(p1); }

int main() {
  int av = 0;
  unsigned long as = 4UL;
  unsigned short at = 1L;
  unsigned int au[5][2][10];
  f v;
  f w = 0xDC6F3D13L;
  g ag[4];
  unsigned short ah;
  char ai;
  long aj;
  g ak;
  unsigned int am = 0x41AEA787L;
  char an;
  unsigned int ao;
  f ap;
  unsigned int aq;

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (fn7(as, fn6(aq, fn5(ai, au[4][1][5] = fn8(~fn4(fn3(aj, fn2(ap, at)) != 0, an), ak) && 0x57L))) > 2)) {
        v = am;
        ag[3] = au[4][1][5];
      } else
        ao = au[4][1][5];
    break;
  }

  fn11(v, "g_3", av);
  fn1(q, av);

  return 0;
}