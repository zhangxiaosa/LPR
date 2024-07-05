#include <stdio.h>

short fn3(short p1, short p2) { return 1; }

short fn4(short p1, short p2) { return 1 % p2; }

int s;
int u;
int v;
static short w = 254;

signed ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
short ae;
int af;

short fn9() {
  short ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    for (; i < 5; i += 2)
      ;
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn3(1, u--), 4294967295);
    return ae;
  }
}

int main() {
  int j;
  fn9();
  for (j = 0; j < 5; j++)
    s = s ^ ad[2][j][0];
  printf("s_unrolled_iter_1 = %hX\n", s);
  return 0;
}