
#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;
static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4,
                    struct h p5) {
  do {
    p5.j;
  } while (p1 != p3);
}

unsigned fn2(unsigned p1) {
  struct h p;
  unsigned q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
