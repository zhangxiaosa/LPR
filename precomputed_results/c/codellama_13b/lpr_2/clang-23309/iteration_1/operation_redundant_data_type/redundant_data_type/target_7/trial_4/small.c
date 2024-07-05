c
#include <stdio.h>

int main() {
  unsigned char v = 0;
  unsigned char t = 0;
  unsigned char w = 0;
  unsigned char ac = 1;
  unsigned char ab = 0;

  unsigned char fn10(unsigned char p1, unsigned char p2) {
    unsigned char af = 0x2F2F6D26;
    unsigned char ag = 248;
    fn12(2, ag, p2, 1, p1);
    return af;
  }

  unsigned char fn12(unsigned char p1, unsigned char p2, unsigned char p3, unsigned char p4, unsigned char p5) {
    unsigned char al = 3;
    unsigned char am = 1;
    unsigned char an;
    for (w = 3; w; w--) {
      if (an = 250) {
        p2 = (ab || (an == 0x294A85636008822D)) && (an == 0);
        unsigned char ao = 0xBCD1;
        if (fn2(fn3(ao, fn4(fn6(am, an), 0xE)), p2) & 1)
          v = 1;
      }
    }
    return al;
  }

  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
