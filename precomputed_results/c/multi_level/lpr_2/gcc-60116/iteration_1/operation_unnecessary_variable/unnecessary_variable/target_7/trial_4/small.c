#include <stdio.h>

char fn2(char p1, char p2) { return p1 && p2 ? p1 : p1 % p2; }

char fn4(char p1, char p2) { return p1; }

unsigned fn7(unsigned p1, unsigned p2) { return p1; }

char q;

int main() {
  short au[5][2][10];
  q = 0x41AEA787L;
  printf("checksum = %X\n", q);
  return 0;
}