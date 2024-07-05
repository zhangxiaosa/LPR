#include <stdio.h>

char fn2(char p1, char p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

char q;
unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
long long ak;
unsigned ao;
unsigned ap;

int main() {
  short au_4_1_5;
  ak = 0;

  for (ah = 0; ah <= 3; ah += 1) {
    if (w) {
      q = 0x41AEA787L;
      ag[3] = ~(fn2(ap, 1L) != 0) + ak && 0x57L;
    } else {
      ao = ~(fn2(ap, 1L) != 0) + ak && 0x57L;
    }
  }

  printf("checksum = %X\n", q);
  return 0;
}