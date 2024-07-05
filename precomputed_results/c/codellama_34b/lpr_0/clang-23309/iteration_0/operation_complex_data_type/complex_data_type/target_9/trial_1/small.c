
#include <stdio.h>

typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

d fn10(e p1, f p2) {
  return p1;
}

d fn11(d p1, f p2, e p3) {
  return p1;
}

d fn12(e p1, e p2, d p3, short p4, g p5) {
  return p1;
}

int main() {
  int ap = 0;
  e ae = 2UL;
  d p = fn10(ae, 1L);
  fn11(p, 2L, 1);
  fn12(p, p, 0, 0, 1);
  printf("checksum = %X\n", p);
  return 0;
}
