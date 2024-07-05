#include <stdio.h>

int fn2(int p1) { return p1; }
int fn3() { return 0xDC6F3D13L; }
unsigned fn6() { return 0xDC6F3D13L; }
unsigned fn7() { return 0xDC6F3D13L; }
long long fn8(int p1) { return p1 + 0xDC6F3D13L; }
int v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
int ah;
int ak;
int ao;
unsigned ap;

int main() {
  int au_1[5][2][10];

  for (ak = 0;;) {
    for (ah = 0; ah <= 3U; ah += 1)
      if (w >= (fn7(4UL, fn6()) > 2)) {
        v = 0x41AEA787L;
        ag[3] = au_1[4][1][5];
      } else
        ao = au_1[4][1][5];
    break;
  }

  printf("checksum = %u\n", v);
  return 0;
}