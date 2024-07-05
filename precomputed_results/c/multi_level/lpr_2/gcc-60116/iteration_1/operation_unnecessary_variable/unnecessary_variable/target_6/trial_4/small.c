#include <stdio.h>

char fn2(char p1, char p2) { return p1 && p2 ? p1 : p1 % p2; }

char fn4(char p1, char p2) { return p1; }

unsigned fn7(unsigned p1, unsigned p2) { return p1; }

char q;
int v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
long long ak;
unsigned ao;
unsigned ap;

int main() {
  ak = 0;

  for (ah = 0; ah <= 3; ah += 1) {
    unsigned temp = fn7(4UL, ~fn4(fn2(ap, 1L) != 0, 0) + ak && 0x57L);

    if (w >= (temp > 2)) {
      v = 0x41AEA787L;
      ag[3] = ~fn4(fn2(ap, 1L) != 0, 0) + ak && 0x57L;
    } else {
      ao = ~fn4(fn2(ap, 1L) != 0, 0) + ak && 0x57L;
    }
  }

  q = v;
  printf("checksum = %X\n", q);
  return 0;
}