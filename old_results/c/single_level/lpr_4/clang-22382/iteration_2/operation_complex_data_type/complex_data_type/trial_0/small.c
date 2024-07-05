#include <stdint.h>

signed int i;
long j;
unsigned int k;

static signed int fn1();
uint32_t fn2(p1) {
  signed int p;
  int q;
  fn1(q, p1, 3, p);
  for (;;) {
    signed int r;
    p = r = p;
  }
}

signed int fn1(unsigned p1, unsigned p3, uint32_t p4, signed int p5) {
  p5.k;
w:
  goto w;
}

int main() {}
