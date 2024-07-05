
#include <stdio.h>

long fn3(long p1, long p2) {
  return p1 - p2;
}

long fn6(long p1, long p2) {
  return p2 - p1;
}

long p;
long v;
long w = 3;

long fn12(long p1, long p2, long p3, long p4) {
  long an;
  while (w) {
    an = 250L;
    if (p2 || (an = w)) {
      long ao = 48873;
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
