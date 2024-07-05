#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1();

unsigned fn2(p1) {
  struct h p;
  int q;
  fn1(q, p);
  for (;;) {
    struct h r;
    int r_i;
    long r_j;
    int r_k;
    r_i = r.i;
    r_j = r.j;
    r_k = r.k;
    p = r = p;
  }
}

struct h fn1(unsigned p1, struct h p5) {
  int p5_i;
  long p5_j;
  int p5_k;
  p5_i = p5.i;
  p5_j = p5.j;
  p5_k = p5.k;
w:;
  goto w;
}

int main() {}