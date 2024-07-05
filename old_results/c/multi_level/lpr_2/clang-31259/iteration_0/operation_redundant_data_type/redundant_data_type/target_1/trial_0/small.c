#include<stdio.h>

typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

signed fn2(signed p1, signed p2) {
  return p1;
}

f s;
d u;
int v;
static d w = 254U;
signed ad[][5][7] = {{8}, {8}, {{8}, 0x98}};

void fn9() {
  e ah = 3U;
  int ai[2];
  int i;

  for (i = 0; i < 2; i++)
    ai[i] = 8;

  for (w = 1;;) {
    for (; i < 25; i++) {
    }

    for (int af = 6; af >= 0; af -= 1)
      ai[0] ^= ad[w + 1][w][af] = fn2(1, fn2(ah, u--));

    return;
  }
}

int main() {
  int i, j, k;

  fn9();

  for (j = 0; j < 5; j++)
    for (k = 0; k < 7; k++)
      s = s ^ ad[2][j][k];

  printf("checksum = %d\n", s);

  return 0;
}
