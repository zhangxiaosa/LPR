#include<stdio.h>

char fn2(char p1, int p2) { return p1; }
short fn3(short p1, short p2) { return p2; }

unsigned p;
unsigned u;
unsigned e_0;
int main() {
  int d = 2L;
  for (; u < 51; ++u) {
    e_0 = 0x9EE7F9D1C772505B;
    p = fn3(4L, d) + e_0;
    d = fn2(p, 3);
  }
  printf("checksum = %X\n", p);
  return 0;
}