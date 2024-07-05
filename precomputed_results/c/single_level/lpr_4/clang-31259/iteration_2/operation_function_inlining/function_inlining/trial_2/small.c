#include <stdio.h>

unsigned s;
unsigned u;
int v;
static unsigned w = 254U;
int ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};

void fn6(int p1) {
  s = s ^ p1;
}

int main() {
  unsigned ah = 3U;
  int ai[2];
  int i;
  int j;
  int k;

  for (i = 0; i < 2; i++)
    ai[i] = 8;

  for (w = 1;;) {
    for (; i < 5; i++)
      ;

    for (int af = 6; af >= 0; af -= 1) {
      v = ai[0] ^= ad[w + 1][w][af] = ((1 % (255U % (ah % (--u % 4294967295U))))) % 4294967295U;
    }

    return 0;
  }

  for (i = 0; i < 7; i++)
    for (j = 0; j < 5; j++)
       for (k = 0; k < 7; k++) {
          fn6(ad[i][j][k]);
       }

  printf("checksum = %X\n", s);

  return 0;
}