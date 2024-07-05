
#include <stdio.h>

unsigned fn_compute_an(int p1, int p2, long p3, short p4) {
  int an;
  if (p2 || (an = w)) {
    an = 250L;
  }
  return an;
}

unsigned fn_compute_ao(long p1, long p2) {
  return 48873;
}

unsigned fn6(unsigned p1, unsigned p2) {
  int an = fn_compute_an(p1, p2, 0, 0);
  unsigned ao = fn_compute_ao(p1, p2);
  return ao - p2 & 1L;
}

int main() {
  unsigned p = fn6(7L, 7L);
  printf("checksum = %X\n", p);
  return 0;
}
