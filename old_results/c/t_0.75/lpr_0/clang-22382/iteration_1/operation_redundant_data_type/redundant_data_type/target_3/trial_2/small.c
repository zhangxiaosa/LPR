#include <stdio.h>

signed int fn1(unsigned int, short, signed int);

signed int fn2(int p1) {
  signed int p;
  int q;
  fn1(q, p, p);
  for (;;) {
    signed int r;
    p = r = p;
  }
}

signed int fn1(unsigned int p1, short p2, signed int p5) {
  unsigned int k;
w:
  goto w;
}

int main() {
  return 0;
}
