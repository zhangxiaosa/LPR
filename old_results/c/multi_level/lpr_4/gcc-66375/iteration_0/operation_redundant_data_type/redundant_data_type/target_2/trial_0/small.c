#include <stdio.h>

char fn2(char p1, int p2) { return p1; }
short fn3(short p1, short p2) { return p2; }
int fn4(int p1, int p2) { return p1 + p2; }

int p;
int u;
int v[1][4];

short fn11() {
  for (; u < 1; ++u) {
    fn2(v[0][3] = fn3(4L, 2L), 3);
  }
  return 0;
}

int main() {
  fn11();
  p = v[0][3];
  printf("checksum = %X\n", p);
  return 0;
}