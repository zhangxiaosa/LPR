#include <stdio.h>

char fn2(char p1, char p2) { return p1 && p2 ? p1 : p1 % p2; }

long fn3(long p1, long p2) { return p2; }

char fn4(char p1, char p2) { return p1; }

unsigned fn7(unsigned p1, unsigned p2) { return p1; }

char q;
int v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
long aj;
long long ak;
char an;
unsigned ao;
unsigned ap;

int main() {
  char as = 4UL;
  short at = 1L;
  short au_1_1, au_1_2, au_1_3, au_1_4, au_1_5, au_2_1, au_2_2, au_2_3, au_2_4, au_2_5, au_3_1, au_3_2, au_3_3, au_3_4, au_3_5, au_4_1, au_4_2, au_4_3, au_4_4, au_4_5, au_5_1, au_5_2, au_5_3, au_5_4, au_5_5;

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >=
          (fn7(as, au_5_2[4][1][5] = ~fn4(fn3(aj, fn2(ap, at)) != 0, an) + ak &&
                                 0x57L) > 2)) {
        v = 0x41AEA787L;
        ag[3] = au_5_2[4][1][5];
      } else
        ao = au_5_2[4][1][5];

    break;
  }

  q = v;
  printf("checksum = %X\n", q);
  return 0;
}