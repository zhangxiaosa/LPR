#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }
int fn3(int p1, int p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p2; }
unsigned fn7(unsigned p1, unsigned p2) { return p1; }
long long fn8(int p1, long long p2) { return p1 + p2; }

int v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
int ah;
int ak;
int ao;
unsigned ap;
unsigned aq;

int main() {
  int au_1_0_0, au_1_0_1, au_1_0_2, au_1_0_3, au_1_0_4, au_1_0_5, au_1_0_6, au_1_0_7, au_1_0_8, au_1_0_9;
  int au_1_1_0, au_1_1_1, au_1_1_2, au_1_1_3, au_1_1_4, au_1_1_5, au_1_1_6, au_1_1_7, au_1_1_8, au_1_1_9;
  int au_1_2_0, au_1_2_1, au_1_2_2, au_1_2_3, au_1_2_4, au_1_2_5, au_1_2_6, au_1_2_7, au_1_2_8, au_1_2_9;
  int au_1_3_0, au_1_3_1, au_1_3_2, au_1_3_3, au_1_3_4, au_1_3_5, au_1_3_6, au_1_3_7, au_1_3_8, au_1_3_9;
  int au_1_4_0, au_1_4_1, au_1_4_2, au_1_4_3, au_1_4_4, au_1_4_5, au_1_4_6, au_1_4_7, au_1_4_8, au_1_4_9;

  for (ak = 0;;) {
    for (ah = 0; ah <= 3U; ah += 1) {
      if (w >= (fn7(4UL, fn6(aq, au_1_4_9 = fn8(~(fn3(ak, fn2(ap, 1L)) != 0), ak) && 0x57UL)) > 2)) {
        v = 0x41AEA787L;
        ag[3] = au_1_4_9;
      } else {
        ao = au_1_4_9;
      }
    }
    break;
  }

  printf("checksum = %u\n", v);
  return 0;
}