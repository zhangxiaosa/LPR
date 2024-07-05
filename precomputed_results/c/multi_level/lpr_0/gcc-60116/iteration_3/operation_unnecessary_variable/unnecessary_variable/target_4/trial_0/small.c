#include <stdio.h>

int fn2(int p2) { return p2 ? 1 : 0; }
unsigned fn6(unsigned p1, unsigned p2) { return p2; }
unsigned fn7(unsigned p1, unsigned p2) { return p1; }
long long fn8(long long p2) { return p2; }

int v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
int ao;
unsigned ap;

int main() {
  int au_1_decomposed[5][2][10];
  for (;;) {
    if (w >= (fn7(4UL, fn6(0xDC6F3D13L, (au_1_decomposed[4][1][5] = fn8(ap) && 0x57UL))) > 2)) {
      v = 0x41AEA787L;
      ag[3] = au_1_decomposed[4][1][5];
    }
    break;
  }
  printf("checksum = %u\n", v);
  return 0;
}