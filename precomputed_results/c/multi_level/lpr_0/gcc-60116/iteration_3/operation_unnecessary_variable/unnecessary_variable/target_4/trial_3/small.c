#include <stdio.h>

unsigned w = 0xDC6F3D13L;
long long ag[4];
int ah;
int ak;
int ao;
unsigned ap;

int main() {
  int au_1_decomposed[5][2][10];

  for (ak = 0;;) {
    for (ah = 0; ah <= 3U; ah += 1) {
      if (w >= (fn7(4UL, fn6(0xDC6F3D13L, (au_1_decomposed[4][1][5] = ~(fn3(ak, ap) != 0) + ak) && 0x57UL)) > 2)) {
        v = 0x41AEA787L;
        ag[3] = au_1_decomposed[4][1][5];
      } else {
        ao = au_1_decomposed[4][1][5];
      }
    }
    break;
  }

  printf("checksum = %u\n", v);
  return 0;
}