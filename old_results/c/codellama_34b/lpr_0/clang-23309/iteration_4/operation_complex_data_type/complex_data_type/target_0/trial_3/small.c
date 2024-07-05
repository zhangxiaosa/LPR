
#include <stdio.h>

int fn3(long int p1, long int p2) {
  return p1 - p2;
}

unsigned int fn6(unsigned int p1, unsigned int p2) {
  return p2 - p1;
}

int main() {
  int an;
  int ao;
  int w = 3;
  int v;
  long int p1 = 7;
  long int p2 = 7;
  long int p3 = 248;
  signed int p4 = 0;

  while (w) {
    an = 250;
    if (p2 || (an = w)) {
      ao = 48873;
      if (fn3(ao, fn6(1, an)) - p2 & 1)
        v = 1;
    }
    w--;
  }

  printf("checksum = %X\n", v);
  return 0;
}
