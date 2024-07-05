#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

unsigned fn2(unsigned p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

void fn1(unsigned p1, short p2, unsigned p3, unsigned p4) {
  p3.k;
}

int main() {
  return 0;
}
