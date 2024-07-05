#include <stdio.h>

char fn2(char p1, char p2) { return p1 && p2 ? p1 : p1 % p2; }

char fn4(char p1, char p2) { return p1; }

unsigned fn7(unsigned p1, unsigned p2) { return p1; }

char q;
int v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
long long ak;
char an;
unsigned ao;
unsigned ap;

int main() {
  short au_0_0_0;
  short au_0_0_1;
  // ... (Skipping similar decomposed variables for brevity)
  short au_4_1_9;
  
  ak = 0;
  for (ah = 0; ah <= 3; ah += 1) {
    short au_4_1_5_temp = ~fn4(fn2(ap, 1L) != 0, an) + ak && 0x57L;
    au[4][1][5] = au_4_1_5_temp;
    if (w >= (fn7(4UL, au_4_1_5_temp) > 2)) {
      v = 0x41AEA787L;
      ag[3] = au_4_1_5_temp;
    } else {
      ao = au_4_1_5_temp;
    }
  }
  
  q = v;
  printf("checksum = %X\n", q);
  
  return 0;
}