#include <stdio.h>

char fn2(int p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

int p;
int u;
int v0;
int v1;
int v2;
int v3;

int main() {
  int i, j;
  int checksum = 2;
  for (; u < 51; ++u) {
    int e[9];
    for (i = 0; i < 9; i += 3)
      e[i] = 0x9EE7F9D1C772505B;
    v3 = fn3(4, checksum);
    checksum = fn2(checksum, 3);
    checksum = checksum + e[0];
  }
  printf("checksum = %d\n", v3);
  return 0;
}