#include <stdio.h>

int fn4(int p1, int p2) { return (int)p1 % (int)p2; }

unsigned int fn5(unsigned int p1, unsigned int p2) { return p1; }

unsigned int s;
unsigned int u;
int v;
static unsigned int w = 254U;
int ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
int ae;
int af;

int fn9() {
  int ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    for (; i < 2; i++)
      ;
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn5(1, fn5(255U, u--)), (unsigned int)4294967295U);
    return (int)ae;
  }
}

int main() {
  fn9();
  s = ad[2][1][0];
  printf("checksum = %X\n", s);
  return 0;
}