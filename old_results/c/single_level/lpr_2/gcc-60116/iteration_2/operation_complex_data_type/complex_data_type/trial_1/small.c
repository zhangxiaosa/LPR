#include <stdio.h>

short fn2(short p1, short p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(long p1, long p2) { return p2; }
char fn4(char p1, char p2) { return p1; }
char fn5(char p1, int p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p2; }
unsigned fn7(unsigned p1, unsigned p2) { return p1; }
long long fn8(long p1, long long p2) { return p1 + p2; }

unsigned q;
int v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
char ai;
long aj;
long ak;
int am = 0x41AEA787L;
char an;
int ao;
unsigned ap;
int aq;

int main() {
  char as = 4UL;
  short at = 1L;

  int au_0_0_0, au_0_0_1, au_0_0_2, au_0_0_3, au_0_0_4, au_0_0_5, au_0_0_6, au_0_0_7, au_0_0_8, au_0_0_9;
  int au_0_1_0, au_0_1_1, au_0_1_2, au_0_1_3, au_0_1_4, au_0_1_5, au_0_1_6, au_0_1_7, au_0_1_8, au_0_1_9;
  int au_1_0_0, au_1_0_1, au_1_0_2, au_1_0_3, au_1_0_4, au_1_0_5, au_1_0_6, au_1_0_7, au_1_0_8, au_1_0_9;
  int au_1_1_0, au_1_1_1, au_1_1_2, au_1_1_3, au_1_1_4, au_1_1_5, au_1_1_6, au_1_1_7, au_1_1_8, au_1_1_9;
  int au_2_0_0, au_2_0_1, au_2_0_2, au_2_0_3, au_2_0_4, au_2_0_5, au_2_0_6, au_2_0_7, au_2_0_8, au_2_0_9;
  int au_2_1_0, au_2_1_1, au_2_1_2, au_2_1_3, au_2_1_4, au_2_1_5, au_2_1_6, au_2_1_7, au_2_1_8, au_2_1_9;
  int au_3_0_0, au_3_0_1, au_3_0_2, au_3_0_3, au_3_0_4, au_3_0_5, au_3_0_6, au_3_0_7, au_3_0_8, au_3_0_9;
  int au_3_1_0, au_3_1_1, au_3_1_2, au_3_1_3, au_3_1_4, au_3_1_5, au_3_1_6, au_3_1_7, au_3_1_8, au_3_1_9;
  int au_4_0_0, au_4_0_1, au_4_0_2, au_4_0_3, au_4_0_4, au_4_0_5, au_4_0_6, au_4_0_7, au_4_0_8, au_4_0_9;
  int au_4_1_0, au_4_1_1, au_4_1_2, au_4_1_3, au_4_1_4, au_4_1_5, au_4_1_6, au_4_1_7, au_4_1_8, au_4_1_9;

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      if (w >= (fn7(as, fn6(aq, fn5(ai, au_4_1_5 = fn8(~fn4(fn3(aj, fn2(ap, at)) != 0, an), ak) && 0x57L))) > 2)) {
        v = am;
        ag[3] = au_4_1_5;
      }
      else
        ao = au_4_1_5;
    }
    break;
  }

  q = v;
  printf("checksum = %X
", q);
  return 0;
}
