#include<stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;
static struct h fn1(unsigned, short, unsigned, struct h);

unsigned fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned p1, short p2, unsigned p4, struct h p5) {
w:
  goto w;
}

int main() {}
