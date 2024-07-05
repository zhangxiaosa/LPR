#include <stdio.h>

signed fn4(signed p1, signed p2) { return (signed)p1 % (signed)p2; }

signed fn5(signed p1, signed p2) { return p1; }

signed s;
signed u;
signed v;
static signed short w = 254;
signed ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
signed ae;
signed af;

signed fn9() {
  signed ai[2];
  signed i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    for (; i < 2; i++)
      ;
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn5(1, fn5(255, u--)), -1);
    return ae;
  }
}

int main() {
  fn9();
  s = ad[2][1][0];
  printf("checksum = %X\n", s);
  return 0;
}