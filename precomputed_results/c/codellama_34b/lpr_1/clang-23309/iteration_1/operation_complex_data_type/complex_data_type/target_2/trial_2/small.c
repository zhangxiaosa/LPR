
#include <stdio.h>

unsigned int fn2(unsigned int p1, unsigned int p2) { return p1 - p2; }

unsigned int fn3(unsigned int p1, unsigned int p2) { return p1 - p2; }

unsigned int v;
unsigned int w;
unsigned int ac = 1;
unsigned int fn10(unsigned int, unsigned int);

unsigned int fn13() {
  fn10(0, 0);
  return 1;
}

unsigned int fn10(unsigned int p1, unsigned int p2) {
  unsigned int al = 3;
  unsigned int an = 0;
  for (w = 3; w; w--) {
    an = 250;
    p2 = ac || (an = w) == 0x294A85636008822D;
    if (fn2(fn3(0xBCD1, 1 - an), p2) & 1)
      v = 1;
  }
  return al;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
