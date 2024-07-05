#include <stdio.h>

char fn3(long p1, long p2) { return p2; }
char fn4(char p1, char p2) { return (fn3(aj, (ap && 1L) ? ap : ap % 1L) != 0) ? fn3(aj, (ap && 1L) ? ap : ap % 1L) : fn3(aj, (ap && 1L) ? ap : ap % 1L) % p2; }
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
unsigned ap;

int main() {
  short au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      if (w >= ((fn7(4UL, au[4][1][5] = ~fn4(an, 1L)) != 0) ? fn7(4UL, au[4][1][5] = ~fn4(an, 1L)) : fn7(4UL, au[4][1][5] = ~fn4(an, 1L)) % ak) > 2) {
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