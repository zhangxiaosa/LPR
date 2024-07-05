#include <stdio.h>

char fn2(char p1, char p2) { return p1 && p2 ? p1 : p1 % p2; }

char fn4(char p1, char p2) { return p1; }

unsigned fn7(unsigned p1, unsigned p2) { return p1; }

int main() {
  short au[5][2][10];
  long long ag[4];
  short ah;
  long long ak;
  unsigned w = 0xDC6F3D13L;
  int v;

  ak = 0;

  for (ah = 0; ah <= 3; ah += 1) {
    unsigned temp = 0x57L;
    au[4][1][5] = ak && 0x57L;

    if (w >= (temp > 2)) {
      v = 0x41AEA787L;
      ag[3] = au[4][1][5];
    }
  }

  printf("checksum = %X\n", v);
  return 0;
}
