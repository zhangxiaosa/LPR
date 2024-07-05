#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }

long fn3(int p1, int p2) { return p2; }

char fn5(char p1, int p2) { return p2; }

int fn6(int p1, int p2) { return p2; }

int fn7(int p1, int p2) { return p1; }

long fn8(int p1, long p2) { return p1 + p2; }

unsigned f;
int v;
int w = 0xDC6F3D13L;
long ag[4];
short ah;
char ai;
long aj;
long ak;
unsigned al;
int am = 0x41AEA787L;
int ao;
unsigned ap;
int aq;

long fn12() {
  int as = 4;
  int at = 1;
  int au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (fn7(as, fn6(aq, fn5(ai, au[4][1][5] = fn8(~(fn3(aj, fn2(ap, at)) != 0), ak) && 0x57L))) > 2)) {
        v = am;
        ag[3] = au[4][1][5];
      }
      else
        ao = au[4][1][5];
    return al;
  }
}

int main() {
  fn12();
  f = v;
  printf("checksum = %X\n", f);
  return 0;
}