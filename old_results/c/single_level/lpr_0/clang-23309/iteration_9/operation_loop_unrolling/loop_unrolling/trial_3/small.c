#include <stdio.h>

long fn3(long p1, long p2) {
  return p1 - p2;
}

unsigned fn4(unsigned p1, unsigned p2) {
  return p1;
}

int main() {
  long am = 1L;
  int an;
  short ac = 1L;
  long v = 0UL;
  unsigned p2 = ac;

  an = 250UL;
  unsigned p1 = am - an;
  short ao = 0xBCD1L;

  if (fn3(ao, fn4(p1, 0xECL)) - ac & 1UL)
    v = 1UL;

  printf("checksum = %lX\n", v);
  return 0;
}