#include <stdio.h>

unsigned h;
short o;
char p;

int main() {
  short q;
  int i1, i2, q1, q2;

  q = o;

  for (i1 = 0, i2 = 1; i1 < 10 / 2; i1++, i2++) {
    while (q1 > 1) {
      q1 -= 1;
    }
    while (q2 > 1) {
      q2 -= 1;
    }
  }

  if (p == q1 || p == q2) {
    ;
  }

  h = (unsigned char)p;
  printf("checksum = %X\n", h);

  return 0;
}