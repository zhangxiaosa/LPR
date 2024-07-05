#include <stdio.h>

short h_i;
long h_j;
unsigned h_k;
unsigned l;

struct h {
  short i;
  long j;
  unsigned k;
};

static void fn1(unsigned, short, unsigned, unsigned, short*, long*, unsigned*);

void fn2(unsigned p1) {
  struct h p;
  short q;
  fn1(q, l, p1, 3, &(p.i), &(p.j), &(p.k));
  for (;;) {
    struct h r;
    p = r = p;
  }
}

void fn1(unsigned p1, short p2, unsigned p3, unsigned p4, short* p5_i, long* p5_j, unsigned* p5_k) {
  *p5_k;
w:;
  goto w;
}

int main() {}
