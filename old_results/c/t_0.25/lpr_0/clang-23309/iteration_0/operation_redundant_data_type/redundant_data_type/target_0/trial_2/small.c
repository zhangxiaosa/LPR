#include <stdio.h>

typedef int b;
typedef long c;
typedef char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

d fn4(d p1, d p2) { return p1; }

f p;
b t;
f u;
c v;
short ac = 1L;

d fn10(g, e);
short fn12(b, b, d, short, g);

b fn13() {
  e ae = 1UL;
  fn10(u, t);
  return ae;
}

d fn10(g p1, e p2) {
  int af = 0x2F2F6D26L;
  long ai = 7L;
  fn12(ai, ai, 2L, 0, 2L);
  return af;
}

short fn12(b p1, b p2, d p3, short p4, g p5) {
  int al = 3L;
  long am = 1L;
  if (p5 == 250UL) {
    p2 = ac || (p5 == 0);
    short ao = 0xBCD1L;
    if ((ao - fn4(am - p5, 0xECL)) - p2 & 1U)
      v = 1U;
  }
  return al;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %d\n", p);
  return 0;
}