#include <stdio.h>

int fn2(int p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned p;
unsigned u;
unsigned v[1][4];

int fn11() {
  int b = 0L;
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    d = fn2(v[0][3] = fn3(4L, d), 3) + e[9];
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