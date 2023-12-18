#include <stdio.h>

int fn2(int p1) { return p1; }
int fn3(int p1) { return p1; }
unsigned fn6(unsigned p1) { return p1; }
unsigned fn7(unsigned p1) { return p1; }
long long fn8(int p1) { return p1; }

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
      if (w >= (fn7(4UL, fn6(0xDC6F3D13L)) > 2)) {
        v = 0x41AEA787L + (ak != 0);
      } else {
        ao = 0xDC6F3D13L;
      }
    break;
  }

  printf("checksum = %u\n", v);
  return 0;
}