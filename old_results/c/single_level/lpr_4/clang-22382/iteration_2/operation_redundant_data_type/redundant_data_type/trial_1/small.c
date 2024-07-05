#include <stdint.h>

struct h {
  signed int i;
  long int j;
  unsigned int k;
};

static struct h fn1();

unsigned int fn2(p1) {
  struct h p;
  int q;
  fn1(q, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned int p1, unsigned int p3, unsigned int p4, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {}
