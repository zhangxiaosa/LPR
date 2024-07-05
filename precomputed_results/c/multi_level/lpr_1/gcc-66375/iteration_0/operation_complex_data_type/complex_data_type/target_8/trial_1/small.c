#include <stdio.h>

int g;
int v[1][4];

int main() {
  v[0][3] = 4;
  g = v[0][3];
  printf("checksum = %X\n", g);
  return 0;
}
