#include <stdio.h>

short fn2(short p1, short p2) { return p1 && p2 ? p1 : p1 % p2; }

long fn3(long p1, long p2) { return p2; }

char fn4(char p1, char p2) { return p1; }

unsigned fn7(unsigned p1, unsigned p2) { return p1; }

unsigned f;
int v;
unsigned f w = 0xDC6F3D13L;
long long ag[4];
short ah;
long aj;
long long ak;
char an;
int ao;
unsigned f ap;

int main() {
  char as = 4UL;
  short at = 1L;
  int au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (fn7(as, au[4][1][5] = ~fn4(fn3(aj, fn2(ap, at)) != 0, an) + ak && 0x57L) > 2)) {
        v = 0x41AEA787L;
        ag[3] = au[4][1][5];
      }
      else
        ao = au[4][1][5];
    break;
  }
  f = v;
  printf("checksum = %X\n", f);
  return 0;
}