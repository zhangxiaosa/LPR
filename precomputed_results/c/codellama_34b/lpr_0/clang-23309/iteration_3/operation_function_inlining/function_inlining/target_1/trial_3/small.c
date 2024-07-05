
#include <stdint.h>
#include <stdio.h>

typedef unsigned d;
long fn3(long p1, long p2) { return p1 - p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p2 - p1; }
unsigned p;
unsigned v;
short w = 3;
short fn12(int, int, d, short);
int main() {
  int an;
  while (w) {
    an = 250UL;
    if (an || (an = w)) {
      short ao = 48873;
      if (fn3(ao, fn6(1L, an)) - an & 1UL)
        v = 1UL;
    }
    w--;
  }
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
short fn12(int p1, int p2, d p3, short p4) {
  return 0;
}
