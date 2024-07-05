#include <stdio.h>

int s;
unsigned w;
int ad[][5][7] = {{8}, {8}, 8};
int af;

int main() {
  int j;

  for (w = 1;;) {
    for (; af >= 0; af = -1)
      ad[1][w][af] = 4294967295;
    break;
  }

  for (j = 0; j < 5; j++)
    s ^= ad[1][j][0];

  printf("checksum = %X\n", s);

  return 0;
}