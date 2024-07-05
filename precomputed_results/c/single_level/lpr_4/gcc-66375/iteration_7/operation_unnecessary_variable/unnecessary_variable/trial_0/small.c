#include <stdio.h>

char fn2(char p1, int p2) { return p1; }

unsigned p;
unsigned u;
int main() {
  int d = 2L;
  for (; u < 51; ++u) {
    int temp = d;
    d = fn2(temp, 3);
    d = d + 0x9EE7F9D1C772505B;
    p = d; // Assign value directly to p
  }
  printf("checksum = %X\n", p);
  return 0;
}