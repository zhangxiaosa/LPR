
#include <stdio.h>

short fn2(short p1, short p2) { return p1 - p2; }
short fn3(short p1, short p2) { return p1 - p2; }
unsigned v;
unsigned char w;
unsigned ac = 1;
unsigned char fn10(short, short);

int main() {
  unsigned char an;
  for (w = 3; w; w--) {
    an = 250;
    p2 = ac || (an = w) == 0x294A85636008822D;
    if (fn2(fn3(0xBCD1, 1 - an), p2) & 1)
      v = 1;
  }
  printf("checksum = %X\n", v);
  return 0;
}
