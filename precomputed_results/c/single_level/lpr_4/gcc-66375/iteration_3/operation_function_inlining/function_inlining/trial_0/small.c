#include <stdio.h>

void fn1(unsigned p1, int p2) {
  printf("checksum = %X\n", p1);
}

char fn2(char p1, int p2) {
  return p1;
}

short fn3(short p1, short p2) {
  return p2;
}

unsigned fn4(unsigned p1, unsigned p2) {
  return p1 + p2;
}

unsigned p;
unsigned t;
unsigned u;
unsigned fn8(char p1, int p2) {
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned e[9];
    e[0] = 0x9EE7F9D1C772505B;
    unsigned v_3 = fn3(4L, d);
    d = fn2(v_3, 3);
    d = fn4(d, e[0]);
  }
  return p1;
}

int main() {
  int b = 0L;
  {
    int d = 2L;
    for (; u < 51; ++u) {
      unsigned e[9];
      e[0] = 0x9EE7F9D1C772505B;
      unsigned v_3 = 3;
      d = v_3;
      d = d + e[0];
    }
  }
  p = 3;
  {
    printf("checksum = %X\n", p);
  }
  return b;
}