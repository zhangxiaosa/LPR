
#include <stdio.h>
#include <stdlib.h>

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

unsigned char fn10(short p1) {
  short al = 3;
  short an;
  for (w = 3; w; w--) {
    an = 250;
    if (fn2(fn3(0xBCD1, fn6(1, an)), 0) & 1)
      v = 1;
  }
  return al;
}

void fn9(short p1) {
  p = p1;
}

int main() {
  fn13();
  fn9(0);
  fn1(0, 0);
  return 0;
}
