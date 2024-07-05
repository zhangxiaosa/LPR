#include <stdio.h>

unsigned g;
int h2 = 0x92A1D2CDL;

#define UNROLL_FACTOR 2

int main() {
  int i;
  int r[5][9][5];
  int r2[5][9][5];

  for (i = 0; i < UNROLL_FACTOR; i++) {
    if (h2)
      break;
    g = r[0x06D7L][0x06D7L][0x06D7L];

    if (h2)
      break;
    g = r2[0x06D7L][0x06D7L][0x06D7L];
  }

  return 0;
}