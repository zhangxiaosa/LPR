#include <stdio.h>

unsigned w = 254;
signed ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;
void fn9() {
  int ai[2];
  unsigned i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    for (; i < 25; i++) {
    }
    for (af = 6; af >= 0; af -= 1)
      ad[w + 1][w][af] = ai[0] = 1;
    return;
  }
}

int main() {
  unsigned i;
  fn9();
  for (i = 1; i < 5; i++)
    ad[2][i][0] = 1;
  printf("checksum = %X\n", ad[2][1][0]);
  return 0;
}
