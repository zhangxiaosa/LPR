#include<stdio.h>

int fn4(p1) {
  return p1;
}

int main() {
  int an;
  short w;
  short ac = 1L;
  int t;
  long v;

  w = 3;
  w -= 1;

  if (true) {
    t = 1L;

    if (0xBCD1L - (-249L) - 1L & 1UL)
      v = 1UL;
  }

  printf("checksum = %X\n", v);

  return 0;
}