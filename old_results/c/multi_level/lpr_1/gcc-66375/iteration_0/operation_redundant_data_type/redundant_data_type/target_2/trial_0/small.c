#include <stdio.h>

char fn2(short p1, int p2) {
  return p1;
}

short fn3(short p1, short p2) {
  return p2;
}

unsigned p;
unsigned u;
unsigned v[1][4];

short fn11() {
  fn10(6L, 255UL, 1, 0L);
  return 0L;
}

int main() {
  fn11();
  p = v[0][3];
  printf("checksum = %Xu\n", p);
  return 0;
}