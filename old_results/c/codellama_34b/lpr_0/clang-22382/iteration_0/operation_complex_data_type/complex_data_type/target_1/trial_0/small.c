
#include <stdio.h>
#include <stdint.h>

struct h {
  int32_t i;
  int64_t j;
  uint32_t k;
};

unsigned int fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4, struct h p5) {
  p5.j;
  goto w;
}

unsigned int fn2(unsigned int p1) {
  struct h p;
  unsigned int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  return 0;
}
