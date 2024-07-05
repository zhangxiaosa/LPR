
#include <stdio.h>

typedef long d;

d fn3(d p1, d p2) { return p1 - p2; }
d fn6(d p1, d p2) { return p2 - p1; }
d p;
d v;
short w = 3;
short fn12(d p1, d p2, d p3, short p4) {
  d an;
  while (w) {
    an = 250L;
    if (p2 || (an = w)) {
      short ao = 48873;
      if (fn3(ao, fn6(1L, an)) - p2 & 1L)
        v = 1L;
    }
    w--;
  }
  return 0;
}

int main() {
  fn12(7L, 7L, 248L, 0);
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
