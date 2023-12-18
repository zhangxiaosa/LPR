#include <stdio.h>

char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned v[1][4];

int fn10(int p1, unsigned p2, unsigned p3, int p4);

short fn11() {
  fn10(6, 255U, 1, 0);
  return 0;
}

int fn10(int p1, unsigned p2, unsigned p3, int p4) {
  int d = 2;
  unsigned g e[9];
  int i;
  for (i = 0; i < 9; i++)
    e[i] = 0x9EE7F9D1C772505BLLU;
  d = fn2(v[0][3] = fn3(4, d), 3) + e[0];
  return 3;
}

int main() {
  int j;
  fn11();
  for (j = 0; j < 4; j++)
    p = v[0][j];
  printf("checksum = %X\n", p);
  return 0;
}
