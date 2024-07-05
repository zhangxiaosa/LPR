#include<stdio.h>

signed i;
long j;
unsigned k;

unsigned l;

static signed i;
static long j;
static unsigned k;

unsigned fn1(unsigned, short, signed, long, unsigned);

unsigned fn2(p1) {
  signed p;
  int q;
  fn1(q, l, p);
  for (;;) {
    signed r;
    p = r = p;
  }
}

unsigned fn1(unsigned p1, short p2, signed p3, long p4, unsigned p5) {
  p5;

w:
  goto w;
}

int main() {}