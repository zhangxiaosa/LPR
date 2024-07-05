
#include <stdio.h>

int fn3(int p1, int p2) { return p1 - p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p2 - p1; }

int p, v;
short w = 3;

int fn12(int p1, int p2, int p3, int p4) {
  int an;
  while (w) {
    an = 250;
    if (p2 || (an = w)) {
      int ao = 48873;
      if (fn3(ao, fn6(1, an)) - p2 & 1)
        v = 1;
    }
    w--;
  }
  return 0;
}

int main() {
  fn12(7, 7, 248, 0);
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
