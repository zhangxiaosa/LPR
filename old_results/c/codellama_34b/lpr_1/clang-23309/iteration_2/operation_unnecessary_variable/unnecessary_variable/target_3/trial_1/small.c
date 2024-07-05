
#include <stdio.h>

unsigned v;
unsigned char w;
unsigned ac = 1;
unsigned char fn10(short, short);
short fn13() {
  fn10(0, 0);
  return 1;
}
unsigned char fn10(short p1, short p2) {
  short an = 0;
  for (w = 3; w; w--) {
    an = 250;
    if (fn2(0xBCD1, 1 - an) & 1)
      v = 1;
  }
  return 3;
}
int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
