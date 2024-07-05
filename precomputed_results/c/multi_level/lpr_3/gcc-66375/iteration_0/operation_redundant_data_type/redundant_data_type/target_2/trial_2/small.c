#include <stdio.h>

char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned p;
unsigned u;
unsigned v[1][4];

short fn11() {
  int b = 0L;
  for (; u < 51; ++u) {
    unsigned e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    v[0][3] = fn3(4L, fn2(v[0][3], 3)) + e[0];
  }
  return b;
}

int main() {
  int i;
  fn11();
  i = 0;
  p = v[i][3];
  printf("checksum = %X\n", p);
  return 0;
}