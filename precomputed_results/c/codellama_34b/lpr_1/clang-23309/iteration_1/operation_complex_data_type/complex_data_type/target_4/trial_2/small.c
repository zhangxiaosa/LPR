
#include <stdio.h>

short fn2(short p1, short p2) { return p1 - p2; }
short fn3(short p1, short p2) { return p1 - p2; }

unsigned char v;
unsigned char ac = 1;

short fn13() {
  v = 1;
  return 1;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
