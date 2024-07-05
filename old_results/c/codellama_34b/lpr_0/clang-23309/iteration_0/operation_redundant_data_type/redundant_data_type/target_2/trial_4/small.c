
#include <stdio.h>

typedef unsigned long c;

c fn2(c p1, c p2) {
  return p1 - p2;
}

c fn3(c p1, c p2) {
  return p1 - p2;
}

unsigned char fn4(unsigned char p1, unsigned char p2) {
  return p1;
}

unsigned int fn5(unsigned int p1, unsigned int p2) {
  return p2;
}

unsigned int fn6(unsigned int p1, unsigned int p2) {
  return p2 - p1;
}

c fn10(c p1, c p2) {
  return p1 - p2;
}

unsigned char fn11(unsigned char p1, unsigned int p2, c p3, unsigned short p4) {
  return p1;
}

short fn12(c p1, c p2, unsigned char p3, unsigned short p4, c p5) {
  return p1;
}

int main() {
  int ap = 0;
  c p = fn10(1UL, 1UL);
  fn9(p, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}
