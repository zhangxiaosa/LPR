
#include <stdio.h>

int fn3(int p1, int p2) {
  return p1 - p2;
}

unsigned int fn6(unsigned int p1, unsigned int p2) {
  return p2 - p1;
}

int main() {
  int p = 0;
  int v = 0;
  int w = 3;
  int an = 0;
  int ao = 0;

  while (w) {
    an = 250;
    if (p2 || (an = w)) {
      ao = 48873;
      if (fn3(ao, fn6(1, an)) - p2 & 1)
        v = 1;
    }
    w--;
  }

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
