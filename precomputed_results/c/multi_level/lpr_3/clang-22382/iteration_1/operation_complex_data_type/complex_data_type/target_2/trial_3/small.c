#include<stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

static struct h fn1(struct h p5) {
  unsigned p5_k = p5.k;

w:
  goto w;
}

int fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p.i = r.i = p.i;
    p.j = r.j = p.j;
    p.k = r.k = p.k;
  }
}

int main() {}
