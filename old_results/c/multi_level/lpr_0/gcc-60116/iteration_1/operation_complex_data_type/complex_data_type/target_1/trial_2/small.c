#include <stdio.h>

int v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
long ak;
unsigned am = 0x41AEA787L;
int ao;
unsigned ap;
unsigned aq;

int main() {

  // Decomposed variables
  int au_1_0_0_0;
  int au_1_0_0_1;
  int au_1_0_0_2;
  int au_1_0_0_3;
  int au_1_0_0_4;
  int au_1_0_1_0;
  int au_1_0_1_1;
  int au_1_0_1_2;
  int au_1_0_1_3;
  int au_1_0_1_4;
  int au_1_1_0_0;
  int au_1_1_0_1;
  int au_1_1_0_2;
  int au_1_1_0_3;
  int au_1_1_0_4;
  int au_1_1_1_0;
  int au_1_1_1_1;
  int au_1_1_1_2;
  int au_1_1_1_3;
  int au_1_1_1_4;

  int au_1[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3U; ah += 1) {
      // Decompose au_1[0][0][0] to au_1[4][1][4]
      au_1_0_0_0 = au_1[0][0][0];
      // ...
      au_1_1_1_4 = au_1[4][1][4];

      if (w >= (fn7(4UL, fn6(aq, (au_1_1_1_4 = fn8(~(fn3(ak, fn2(ap, 1L)) != 0), ak)) && 0x57UL)) > 2)) {
        v = am;
        ag[3] = au_1_1_1_4;
      }
      else
        ao = au_1_1_1_4;
    }
    break;
  }
  printf("checksum = %u\n", v);
  return 0;
}