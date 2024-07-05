#include <stdio.h>

short a;
int b;
long c;
unsigned int d;
unsigned int e;
unsigned int f;
unsigned int g;

struct h {
  signed int i;
  long j;
  unsigned int k;
};

d l;

static struct h fn1(unsigned int, short, unsigned int, unsigned int, struct h);

e fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {}
