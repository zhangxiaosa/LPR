
#include <iostream>

short fn2(short p1, short p2) { return p1 - p2; }
short fn3(short p1, short p2) { return p1 - p2; }
unsigned v;
unsigned char w;
unsigned ac = 1;
unsigned char fn10(short, short);
int main() {
  fn10(0, 0);
  printf("checksum = %X\n", v);
  return 0;
}
unsigned char fn10(short p1, short p2) {
  p2 = ac || (w = 3) == 0x294A85636008822D;
  if (fn2(fn3(0xBCD1, 1 - w), p2) & 1)
    v = 1;
  return 3;
}
