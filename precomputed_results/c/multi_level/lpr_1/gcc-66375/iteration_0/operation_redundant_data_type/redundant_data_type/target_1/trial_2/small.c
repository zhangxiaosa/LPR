#include <stdio.h>

char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned p;
unsigned u;
unsigned v[1][4];
int fn10(int, unsigned, unsigned, int);

short fn11() {
  fn10(6, 255UL, 1, 0L);
  return 0L;
}

int fn10(int p1, unsigned p2, unsigned p3, int p4) {
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    d = fn2(v[0][3] = fn3(4L, d), 3) + e[0];
  }
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
