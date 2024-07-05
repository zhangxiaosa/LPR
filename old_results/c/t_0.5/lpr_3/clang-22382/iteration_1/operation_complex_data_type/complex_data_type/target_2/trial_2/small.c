#include <stdio.h>

struct h {
  signed int i;
  long j;
  unsigned int k;
};

static struct h fn1(struct h p5) {
  for (;;) {
    p5.k;
  }
}

unsigned int fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    signed int r_i = r.i;
    long r_j = r.j;
    unsigned int r_k = r.k;
    signed int p_i = r_i;
    long p_j = r_j;
    unsigned int p_k = r_k;
    r = p = (struct h){p_i, p_j, p_k};
  }
}

int main() {}
