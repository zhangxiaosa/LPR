#include <stdio.h>

unsigned p;
int t;
unsigned u;
long v;
short ac = 1L;

char fn4(char p1, char p2) {
  return p1;
}

short fn12(int p1, int p2, char p3, short p4, unsigned p5) {
  int an;
  if (an = 250UL) {
    p2 = ac || (an = 0);
    short ao = 0xBCD1L;
    if ((ao - fn4(1L - an, 0xECL)) - p2 & 1UL)
      v = 1UL;
  }
  return 3L;
}

int fn13() {
  fn12(7L, 7L, 2L, 0, 2L);
  return 1UL;
}

int main() {
  fn12(7L, 7L, 2L, 0, 2L);
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}