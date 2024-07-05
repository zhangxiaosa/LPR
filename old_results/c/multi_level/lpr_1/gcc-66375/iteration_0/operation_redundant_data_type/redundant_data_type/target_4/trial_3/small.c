#include <stdio.h>

char fn2(short p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

int p;
int u;
int v[1][4];

short fn11() {
  fn10(6, 255UL, 1, 0);
  return 0;
}

int main() {
  int j_;
  fn11();
  for (j_ = 0; j_ < 4; j_++) {
    p = v[0][j_];
  }
  printf("checksum = %Xu\n", p);
  return 0;
}