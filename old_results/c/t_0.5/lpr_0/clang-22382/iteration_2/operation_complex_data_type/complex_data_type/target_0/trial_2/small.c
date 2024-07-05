#include<stdio.h>

struct h {
  signed int i;
  long j;
  unsigned int k;
};

static struct h fn1(struct h p5) {
  p5.k;
w:
  goto w;
}

unsigned int fn2() {
  struct h p;
  signed int p_i;
  long p_j;
  unsigned int p_k;

  fn1(p);

  for (;;) {
    struct h r;
    signed int r_i;
    long r_j;
    unsigned int r_k;

    p_i = p.i;
    p_j = p.j;
    p_k = p.k;

    r_i = p_i;
    r_j = p_j;
    r_k = p_k;

    p.i = r_i;
    p.j = r_j;
    p.k = r_k;
  }
}

int main() {}
