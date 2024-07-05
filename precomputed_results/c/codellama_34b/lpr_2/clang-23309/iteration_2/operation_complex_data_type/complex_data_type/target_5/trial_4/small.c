
#include <stdio.h>

int fn2(int p1, int p2) { return p1 - p2; }

unsigned char fn4(unsigned p1, unsigned p2) { return p1; }

int p;
int t;
short w;
unsigned ac = 1;

int fn13() {
  short an;
  for (w = 3; w; w -= 1) {
    an = 250;
    t = ac || (an = w) == 0x294A85636008822D;
    if (fn2(an - 1 - 0xECL, t) & 1)
      p = 1;
  }
  return p;
}

int main() {
  fn13();
  printf("checksum = %d\n", p);
  return 0;
}
