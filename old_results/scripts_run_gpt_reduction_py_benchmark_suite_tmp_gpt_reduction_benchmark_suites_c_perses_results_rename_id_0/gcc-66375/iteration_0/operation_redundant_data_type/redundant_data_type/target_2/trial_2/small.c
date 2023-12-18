#include <stdio.h>

char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

int fn4(int p1, int p2) { return p1 + p2; }

int p;
int u;
int v[1][4];

int main() {
  int i, j;
  int p;

  for (; u < 51; ++u) {
    int e[9];
    for (i = 0; i < 9; i += 3)
      e[i] = 0x9EE7F9D1C772505B;
    p = fn4(fn2(v[0][3] = fn3(4, 2), 3), e[0]);
  }

  for (i = 0; i < 1; i++)
    for (j = 0; j < 4; j++)
      p = v[i][j];

  printf("checksum = %d\n", p);

  return 0;
}