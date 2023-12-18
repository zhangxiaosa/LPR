#include <stdio.h>

char fn2(char p1, char p2) { return p1 && p2 ? p1 : p1 % p2; }

char q;
unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
long long ak;
unsigned ao;
unsigned ap;

int main() {
  short au_0_0_0;
  short au_0_0_1;
  // ... Continue with the decomposition for the remaining au variables
  short au_4_1_8;
  short au_4_1_9;
  ak = 0;
  for (ah = 0; ah <= 3; ah += 1) {
    unsigned assigned_value = au_4_1_5 = ~(fn2(ap, 1L) != 0) + ak && 0x57L;
    if (w) {
      q = 0x41AEA787L;
      ag[3] = au_4_1_5;
    } else
      ao = au_4_1_5;
  }
  printf("checksum = %X\n", q);
  return 0;
}