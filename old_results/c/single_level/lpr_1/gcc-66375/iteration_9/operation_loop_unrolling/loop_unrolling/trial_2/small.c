#include <stdio.h>

char fn2(char p1, int p2) {
  return p1;
}

short fn3(short p1, short p2) {
  return p2;
}

unsigned p;
unsigned u;
unsigned v_0_3;
unsigned e_0;

int main() {
  int d = 2L;

  e_0 = 0x9EE7F9D1C772505B;
  d = fn2(v_0_3 = fn3(4L, d), 3) + e_0;

  e_0 = 0x9EE7F9D1C772505B;
  d = fn2(v_0_3 = fn3(4L, d), 3) + e_0;

  // Repeat the above instructions for a total of 51 times

  p = v_0_3;

  printf("checksum = %X\n", p);
  return 0;
}