c
#include <stdio.h>

void fn1(short p1, int p2) {
  printf("checksum = %X\n", p1);
}

short fn2(short p1, short p2) {
  return p1 - p2;
}

short fn3(short p1, short p2) {
  return p1 - p2;
}

short fn5(short p1, short p2) {
  return p2;
}

short fn6(short p1, short p2) {
  return p1 - p2;
}

short p;

void fn9(short p1, char *p2) {
  p = p1;
}

short t;
unsigned char u;
short v;
unsigned char w;
short ab;
unsigned char ac = 1;

unsigned char fn10(short p1, short p2) {
  return (p1 & p2) | (~p2 & 0xFF);
}

unsigned char fn11(unsigned char p1, short p2, short p3, short p4) {
  return (p1 & p2) | (~p2 & 0xFF);
}

int main() {
  fn13();
  fn9(v, "g_170");
  fn1(p, 0);
  return 0;
}
