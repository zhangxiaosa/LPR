#include <stdio.h>

typedef short a;
typedef long c;
typedef long long g;
typedef unsigned int f;

a fn2(a p1, a p2) { return p1 && p2 ? p1 : p1 % p2; }

c fn3(c p1, c p2) { return p2; }

char fn4(char p1, char p2) { return p1; }

char fn5(char p1, int p2) { return p2; }

unsigned fn6(unsigned p1, unsigned int p2) { return p2; }

unsigned fn7(unsigned p1, unsigned int p2) { return p1; }

g fn8(g p1, g p2) { return p1 + p2; }

unsigned int q;
int v;
unsigned int w = 0xDC6F3D13L;
g ag[4];
a ah;
char ai;
c aj;
g ak;
unsigned int al;
int am = 0x41AEA787L;
char an;
int ao;
unsigned int ap;
int aq;

c fn12() {
  char as = 4UL;
  a at = 1L;
  int au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      if (w >= (fn7(as, fn6(aq, fn5(ai, au[4][1][5] = fn8(~fn4(fn3(aj, (a)(fn2(ap, at))) != 0, an), ak) && 0x57L))) > 2) {
        v = am;
        ag[3] = (g)au[4][1][5];
      } else {
        ao = au[4][1][5];
      }
    }
    return al;
  }
}

int main() {
  fn12();
  q = v;
  printf("checksum = %d\n", q);
  return 0;
}