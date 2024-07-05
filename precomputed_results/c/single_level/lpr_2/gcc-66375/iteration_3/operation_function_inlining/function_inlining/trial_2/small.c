#include <stdio.h>

unsigned p;
unsigned u;
unsigned v[1][4];

short fn11() {
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned e[9];
    e[0] = 0x9EE7F9D1C772505BLL;
    v[0][3] = 4L;
    d = v[0][3] + 3 + e[0];
  }
  return 0;
}

int main() {
  int i, j;
  int f = 0;
  fn11();
  for (i = 0; i < 1; i++)
    for (j = 0; j < 4; j++)
      p = v[i][j];
  printf("checksum = %X\n", p);
  return 0;
}