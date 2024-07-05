#include<stdio.h>

char fn2(char p1, int p2) {
  return p1;
}

int main() {
  unsigned char p;
  unsigned int u;
  unsigned int v_3;
  int d = 2L;
  for (; u < 51; ++u) {
    v_3 = d;
    d = fn2(v_3, 3);
    d = d + 0x9EE7F9D1C772505B;
  }
  p = v_3;
  printf("checksum = %X\n", p);
  return 0;
}