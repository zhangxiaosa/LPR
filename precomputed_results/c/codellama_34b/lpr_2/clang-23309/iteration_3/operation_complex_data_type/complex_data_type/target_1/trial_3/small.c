
#include <stdio.h>

int fn2(int p1, int p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
int p;
int t;
int v_int;
short w;
unsigned ac = 1;

int an;
int an_1 = 250;
int an_2 = 0x294A85636008822D;
int ao = 0xBCD1;
int ao_1 = 1;
int ao_2 = 0xECL;
int t_1 = 0x294A85636008822D;

int fn13() {
  short al = 3;
  for (w = 3; w; w -= 1) {
    an = an_1;
    t = ac || (an = w) == t_1;
    if (fn2(ao - fn4(ao_1 - an, ao_2), t) & 1)
      v_int = 1;
  }
  return al;
}

int main() {
  fn13();
  p = v_int;
  printf("checksum = %d\n", p);
  return 0;
}
