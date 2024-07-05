#include<stdio.h>

long fn3(long p1, long p2) {
  return p1 - p2;
}

unsigned fn4(unsigned p1, unsigned p2) {
  return p1;
}

long v;
short w;
short ac = 1L;

int main() {
  long am = 1L;

  for (w = 3; w; w -= 1) {
    int an;

    if (an = 250UL) {
      if (fn3(0xBCD1L, fn4(am - an, 0xECL)) - ac & 1UL) {
        v = 1UL;
      }
    }
  }

  printf("checksum = %lX\n", v);

  return 0;
}