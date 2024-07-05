
#include <stdio.h>

#define LOW 0xBCD1
#define HIGH 1

unsigned char fn10(short p1, short p2) {
  short an;
  for (int w = 3; w; w--) {
    an = 250;
    if (p2 == 0) {
      p2 = an;
    }
    if (fn2(fn3(LOW, HIGH - an), p2) & 1) {
      v = 1;
    }
  }
  return 3;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
