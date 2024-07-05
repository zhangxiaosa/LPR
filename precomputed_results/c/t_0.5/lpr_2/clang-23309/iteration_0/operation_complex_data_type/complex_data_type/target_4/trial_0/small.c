#include <stdio.h>

short fn2(short p1, short p2) { return p1 - p2; }

unsigned char fn4(unsigned p1, unsigned p2) { return p1; }

unsigned fn5(unsigned p1, unsigned p2) { return p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned p;
long v_new;
short w_new;
unsigned int ab_new;
short ac_new = 1;

short fn13() {
  long am = 1;
  short an;
  for (w_new = 3; w_new; w_new -= 1)
    if (an = 250) {
      ab_new = fn5(ab_new, ac_new) || (an = w_new) == 0x294A85636008822D;
      short ao = 0xBCD1;
      if (fn2(ao - fn4(fn6(am, an), 0xEC), ab_new) & 1)
        v_new = 1;
    }
  return 3;
}

int main() {
  fn13();
  p = v_new;
  printf("checksum = %X\n", p);
  return 0;
}