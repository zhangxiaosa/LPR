#include <stdio.h>

char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned p;
unsigned u;
unsigned v[1][4];

short fn11() {
  int d = 2L;
  for (; u < 51; ++u) {
    int i;
    unsigned e[9];
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    d = fn2(v[0][3], 3);
  }
  return 0;
}

int main() {
  fn11();
  p = v[0][3];
  printf("checksum = %X\n", p);
  return 0;
}