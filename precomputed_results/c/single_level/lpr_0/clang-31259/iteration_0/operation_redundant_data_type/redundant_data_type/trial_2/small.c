#include <stdio.h>

void fn1(unsigned int p1, int p2) { printf("checksum = %X\n", p1); }

signed int fn2(signed int p1, signed int p2) { return p1; }

short int fn3(short int p1, short int p2) { return p1; }

int fn4(int p1, int p2) { return p1 % p2; }

unsigned int fn5(unsigned int p1, unsigned int p2) { return p1; }

unsigned int s;

void fn6(p1) { s = s ^ p1; }

void fn7(p1) { fn6(p1); }

void fn8(unsigned int p1, char *p2, int p3) { fn7(p1); }

unsigned int u;

int v;

static unsigned int w = 254U;

signed int ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};

short int ae;

int af;

signed int fn9() {
  unsigned int ah = 3U;
  int ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    for (; i < 5; i++)
      ;
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] =
          fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);
    return ae;
  }
}

int main() {
  int i, j, k;
  int aj = 0;
  fn9();
  for (i = 0; i < 7; i++)
    for (j = 0; j < 5; j++)
      for (k = 0; k < 7; k++)
        fn8(ad[i][j][k], "g_643[i][j][k]", aj);
  fn1(s, aj);
  return 0;
}
