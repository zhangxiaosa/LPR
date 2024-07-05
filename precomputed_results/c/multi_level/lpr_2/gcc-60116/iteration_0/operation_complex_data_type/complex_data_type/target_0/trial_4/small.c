#include <stdio.h>

short fn2(short p1, short p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(long p1, long p2) { return p2; }
char fn4(char p1, char p2) { return p1; }
unsigned fn7(unsigned p1, unsigned p2) { return p1; }

char q;
int v;
unsigned w = 0xDC6F3D13L;

long long ag_0;
long long ag_1;
long long ag_2;
long long ag_3;
short ah;
long aj;
long long ak;
char an;
unsigned ao;
unsigned ap;

int main() {
  char as = 4UL;
  short at = 1L;

  short au_0_0_0;
  short au_0_0_1;
  // ... (variables for other elements of au)
  short au_4_1_8;
  short au_4_1_9;

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (fn7(as, au_4_1_5 = ~fn4(fn3(aj, fn2(ap, at)) != 0, an) + ak && 0x57L) > 2)) {
        v = 0x41AEA787L;
        ag_3 = au_4_1_5;
      }
      else
        ao = au_4_1_5;
    break;
  }
  q = v;
  printf("checksum = %X\n", q);
  return 0;
}