
#include <stdio.h>

short fn2(short p1, short p2) { return p1 - p2; }
short fn3(short p1, short p2) { return p1 - p2; }
unsigned v;
unsigned char w;
unsigned ac = 1;
unsigned char fn10(short p1, short p2) {
  short an;
  for (w = 3; w; w--) {
    an = 250;
    p2 = ac || (an = w) == 0x294A85636008822D;
    if (fn2(p1 - p2, p2) & 1)
      v = 1;
  }
  return 3;
}
int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
