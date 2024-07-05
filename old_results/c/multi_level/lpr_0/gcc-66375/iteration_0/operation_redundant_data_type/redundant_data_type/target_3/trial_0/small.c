#include <stdio.h>

signed char fn2(signed char p1, int p2) { return p1; }

signed short fn3(signed short p1, signed short p2) { return p2; }

int fn4(int p1, int p2) { return p1 + p2; }

int p;
int u;
int v[1][4];

int main() {
  int i, j;
  int checksum = 2;

  for (; u < 51; ++u) {
    int e[9];
    for (i = 0; i < 9; i += 3)
      e[i] = 0x9EE7F9D1C772505B;
    checksum = fn4(fn2(v[0][3] = fn3(4, checksum), 3), e[0]);
  }

  for (i = 0; i < 1; i++)
    for (j = 0; j < 4; j++)
      p = v[i][j];

  printf("checksum = %u\n", p);

  return 0;
}