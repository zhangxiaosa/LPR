
#include <stdio.h>

int fn3(int p1, int p2) { return p1 - p2; }

int fn6(int p1, int p2) { return p2 - p1; }

int p;
int v;
short w = 3;

int fn12(int p1, int p2, int p3, int p4) {
  int an;
  while (w) {
    an = 250L;
    if (p2 || (an = w)) {
      int ao = 48873;
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
