
#include <stdio.h>

typedef int b;

struct h {
  signed i;
  b j;
  unsigned k;
};

b l;
static struct h fn1(b, b, b, b, struct h);

b fn2(b p1) {
  struct h p;
  b q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(b p1, b p2, b p3, b p4, struct h p5) {
  p5.k;
w:;
  goto w;
}

int main() {}
