#include <stdio.h>

unsigned int fn2(signed int p1, signed int p2) { return p1; }

short int fn3(short int p1, short int p2) { return p1; }

int fn4(int p1, int p2) { return p1 % p2; }

unsigned int s;
unsigned int u;
int v;
static unsigned int w = 254U;

signed int ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};

short int ae;
int af;

unsigned int fn9() {
  unsigned int ah = 3U;
  int ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    for (; i < 5; i++)
      ;
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn3((short int)1, fn2((signed int)ah, u--)), 4294967295U);
    return (unsigned int)ae;
  }
}

int main(void) {
  int i, k;
  fn9();
  for (i = 0; i < 6; i += 2) {
    for (k = 0; k < 5; k++)
      for (int l = 0; l < 7; l++)
        s = s ^ ad[i][k][l];
    printf("s_unrolled_iter_1 = %X\n", (unsigned int)s);
  }
  return 0;
}