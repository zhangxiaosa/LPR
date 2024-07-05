
#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

const unsigned l;
static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4,
                    const struct h p5) {
  p5.j;
w:;
  goto w;
}

inline unsigned fn2(unsigned p1) {
  struct h p;
  unsigned q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
