#include <stdio.h>

struct h {
  signed int i;
  long j;
  unsigned int k;
};

static struct h fn1(unsigned int p1, unsigned int p3, unsigned int p4, struct h p5) {
  p5.k;
w:
  goto w;
}

unsigned int fn2(unsigned int p1) {
  struct h p;
  unsigned int q;
  fn1(q, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  return 0;
}