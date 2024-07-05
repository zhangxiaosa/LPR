#include <stdio.h>

typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

f s;
static d w = 254U;
a ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
c af;
void fn9() {
  e ah = 3U;
  int i;
  for (i = 0; i < 2; i++)
    ad[w + 1][w][i] = 8;
  for (w = 1;;) {
    for (; i < 5; i++)
      ;
    for (af = 6; af >= 0; af -= 1)
      v = ad[w + 1][w][af] = (1 % ((ah << 1) % (u-- << 1) % (4294967295U << 1))) >> 1;
    return;
  }
}

int main() {
  int i, j, k;
  int aj = 0;
  fn9();
  for (i = 0; i < 7; i++)
    for (j = 0; j < 5; j++)
      for (k = 0; k < 7; k++)
        s = s ^ ad[i][j][k];
  printf("checksum = %X\n", s);
  return 0;
}