#include <stdio.h>

typedef long c;

char fn4(char p1, char p2) { return p1; }

c v;

short fn12(int p1, int p2);

short fn12(int p1, int p2) {
  int al = 3L;
  c am = 1L;
  if (250UL) {
    p2 = 1L || (0);
    if ((0xBCD1L - fn4(am - 0, 0xECL)) - p2 & 1UL)
      v = 1UL;
  }
  return al;
}

int main() {
  fn12(7L, 7L);
  printf("checksum = %X\n", v);
  return 0;
}