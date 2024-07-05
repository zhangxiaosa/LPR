
#include <stdio.h>

int fn2(int p1, int p2) { return p1 - p2; }

unsigned char fn4(unsigned p1, unsigned p2) { return p1; }

int p;
int t;
int v;
unsigned short w;
unsigned ac = 1u;

int fn13() {
  int al = 3;
  unsigned short an;
  for (w = 3; w; w -= 1u) {
    an = 250u;
    t = ac || (an = w) == 0x294A85636008822Du;
    unsigned int ao = 0xBCD1u;
    if (fn2(ao - fn4(1u - an, 0xECLu), t) & 1u)
      v = 1u;
  }
  return al;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %d\n", p);
  return 0;
}
