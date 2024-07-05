
#include <stdio.h>

int fn1(int p1) {
  printf("checksum = %X\n", p1);
  return p1;
}

int fn2(int p1, int p2) {
  return p1 - p2;
}

int fn4(int p1, int p2) {
  return p1;
}

int fn6(int p1, int p2) {
  return p1 - p2;
}

int p;
int t;
int v;
short w;
short ac = 1;

int fn13() {
  int al = 3;
  short an;
  for (w = 3; w; w -= 1) {
    an = 250;
    t = ac || (an = w) == 0x294A85636008822D;
    short ao = 0xBCD1;
    if (fn2(ao - fn4(fn6(1, an), 0xEC), t) & 1)
      v = 1;
  }
  return al;
}

int main() {
  fn13();
  p = v;
  fn1(p);
  return 0;
}
