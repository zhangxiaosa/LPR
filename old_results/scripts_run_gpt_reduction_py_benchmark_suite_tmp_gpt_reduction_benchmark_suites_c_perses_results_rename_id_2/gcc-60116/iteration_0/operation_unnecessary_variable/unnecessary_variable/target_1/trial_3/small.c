#include <stdio.h>

char fn2(char p1, char p2) { return p1 && p2 ? p1 : p1 % p2; }

long fn3(long p1, long p2) { return p2; }

char fn4(char p1, char p2) { return p1; }

unsigned fn7(unsigned p1, unsigned p2) { return p1; }

char q;
int v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
long aj;
long long ak;
char an;
unsigned ao;

int main() {
  char as = 4UL;
  short at = 1L;
  short au[5][2][10];

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      if (w >= (fn7(as, au[4][1][5] = ~fn4(fn3(aj, 0) != 0, an) + ak && 0x57L) > 2)) {
        v = 0x41AEA787L;
        ag[3] = au[4][1][5];
      } else {
        ao = au[4][1][5];
      }
    }
    break;
  }

  q = v;

  printf("checksum = %X\n", q);

  return 0;
}
