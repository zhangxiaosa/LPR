#include <stdio.h>

unsigned f;
unsigned u;
int v;
static unsigned w = 254U;
signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
int ae;
int af;

signed fn9() {
  int ai[2];
  ai[0] = 8;
  ai[1] = 8;

  for (;;) {
    for (af = 6; af >= 0; af -= 1)
      ai[0] ^= ad[w + 1][w][af] = 1;
    return;
  }
}

int main() {
  fn9();
  for (int i = 0; i < 7; i++)
    f = f ^ ad[i][1][0];
  printf("checksum = %x\n", f);
  return 0;
}