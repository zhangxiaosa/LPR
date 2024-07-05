#include <stdio.h>

int fn4(int p1, int _){
  return _;
}

int s;
unsigned w;
int ad[][5][7] = {{8}, {8}, 8};
int af;

int main() {
  int i, j;

  for (i = 0; i < 2; i++)
    ;

  for (w = 1;;) {
    for (; af > 2; af -= 3) {
      ad[1][w][af] = fn4(1, 4294967295);
      ad[1][w][af-1] = fn4(1, 4294967295);
      ad[1][w][af-2] = fn4(1, 4294967295);
    }

    if (af == 2) {
      ad[1][w][af] = fn4(1, 4294967295);
      ad[1][w][af-1] = fn4(1, 4294967295);
      break;
    } else if (af == 1) {
      ad[1][w][af] = fn4(1, 4294967295);
      break;
    } else {
      break;
    }
  }

  for (j = 0; j < 5; j++)
    s ^= ad[i][j][0];

  printf("checksum = %X\n", s);
  return 0;
}