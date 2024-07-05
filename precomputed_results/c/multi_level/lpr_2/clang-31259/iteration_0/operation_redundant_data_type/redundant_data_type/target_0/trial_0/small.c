#include <stdio.h>

typedef signed a__primitive__;
typedef int c__primitive__;
typedef unsigned d__primitive__;
typedef unsigned e__primitive__;
typedef unsigned f__primitive__;

a__primitive__ fn2(a__primitive__ p1, a__primitive__ p2) { return p1; }
c__primitive__ fn4(c__primitive__ p1, c__primitive__ p2) { return p1 % p2; }

f__primitive__ s;
d__primitive__ u;
c__primitive__ v;
static d__primitive__ w = 254U;

a__primitive__ ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

void fn9() {
  e__primitive__ ah = 3U;
  c__primitive__ ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    for (; i < 25; i++) {
    }
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, fn2(ah, u--)), 4294967295U);
    return;
  }
}

int main() {
  int i, j, k;
  fn9();
  for (j = 0; j < 5; j++)
    for (k = 0; k < 7; k++)
      s = s ^ ad[2][j][k];
  printf("checksum = %X\n", s);
  return 0;
}