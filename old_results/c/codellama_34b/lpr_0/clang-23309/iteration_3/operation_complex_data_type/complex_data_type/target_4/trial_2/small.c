
#include <stdio.h>

unsigned fn3(unsigned p1, unsigned p2) {
  return p1 - p2;
}

unsigned fn6(unsigned p1, unsigned p2) {
  return p2 - p1;
}

unsigned p;
unsigned v;
short w = 3;
short fn12(int p1, int p2, long p3, short p4) {
  int an;
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
