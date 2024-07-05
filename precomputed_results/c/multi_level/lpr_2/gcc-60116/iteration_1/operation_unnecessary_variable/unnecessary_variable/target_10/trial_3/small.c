#include <stdio.h>

char fn2(char p1, char p2) { return p1 && p2 ? p1 : p1 % p2; }

char fn4(char p1, char p2) { return p1; }

unsigned fn7(unsigned p1, unsigned p2) { return p1; }

unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
long long ak;
unsigned ao;
unsigned ap;

int main() {
  short au[5][2][10];
  ak = 0;

  for (ah = 0; ah <= 3; ah += 1) {
    unsigned temp = fn7(4UL, ~fn4(ap, 0) + ak && 0x57L);

    if (w >= ((~ap && 0x57L) > 2)) {
      ag[3] = au[4][1][5];
    }
  }

  printf("checksum = %X\n", ag[3]);
  return 0;
}