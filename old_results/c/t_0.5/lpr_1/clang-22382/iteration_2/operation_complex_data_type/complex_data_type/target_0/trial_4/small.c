#include <stdio.h>

int fn1(int p5_k);

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1();

unsigned fn2() {
  int p_i;
  long p_j;
  int p_k;

  struct h p;
  p.i = p_i;
  p.j = p_j;
  p.k = p_k;

  fn1(p.k);

  for (;;) {
    int r_i;
    long r_j;
    int r_k;

    struct h r;
    r.i = r_i;
    r.j = r_j;
    r.k = r_k;

    p = r = p;
  }
}

int fn1(int p5_k) {
  p5_k;

w:
  goto w;
}

int main() {}
