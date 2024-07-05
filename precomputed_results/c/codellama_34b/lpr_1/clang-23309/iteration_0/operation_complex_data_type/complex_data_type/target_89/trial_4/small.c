c
#include <stdio.h>

short fn10(short p1, short p2) {
  return 0x2F2F6D26;
}

unsigned char fn11(unsigned char p1, short p2, short p3, short p4) {
  return 248;
}

short fn13() {
  return 1;
}

int main() {
  short s_short = fn10(u, t);
  short p91 = fn1(v, 0);
  printf("s_short = %d\n", s_short);
  printf("p91 = %d\n", p91);
  return 0;
}
