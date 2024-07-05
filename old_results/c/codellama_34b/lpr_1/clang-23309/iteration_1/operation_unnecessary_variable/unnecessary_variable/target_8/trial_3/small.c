
#include <stdio.h>

short fn2(short p1, short p2) { return p1 - p2; }

short fn3(short p1, short p2) { return p1 - p2; }

unsigned ac = 1;
unsigned char fn10(short, short);

short fn13() {
  unsigned char p1 = 0xBCD1;
  unsigned char p2 = 1 - ac;
  if (fn2(fn3(p1, p2), p2) & 1) {
    v = 1;
  }
  return 3;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
