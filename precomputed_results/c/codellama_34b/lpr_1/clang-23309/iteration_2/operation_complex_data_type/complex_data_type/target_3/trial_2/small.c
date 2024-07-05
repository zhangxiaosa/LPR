
#include <stdio.h>

unsigned v;
unsigned char ac = 1;
unsigned char fn10(short p1, short p2) {
  short an;
  for (unsigned w = 3; w; w--) {
    an = 250;
    p2 = ac || (an = w) == 0x294A85636008822D;
    if (fn2(fn3(0xBCD1, 1 - an), p2) & 1)
      v = 1;
  }
  return 3;
}
int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
