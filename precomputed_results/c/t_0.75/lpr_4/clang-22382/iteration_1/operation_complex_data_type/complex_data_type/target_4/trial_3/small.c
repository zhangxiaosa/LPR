#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, unsigned p3, struct h p5) {
  int p5_i = p5.i;
  long p5_j = p5.j;
  int p5_k = p5.k;

  // Use p5_i, p5_j, p5_k as needed

w:
  goto w;
}

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, 3, p);
  for (;;) {
    struct h r;
    int r_i = r.i;
    long r_j = r.j;
    int r_k = r.k;

    int p_i = r_i;
    long p_j = r_j;
    int p_k = r_k;

    // Use p_i, p_j, p_k as needed

    p = r = p;
  }
}

int main() {}
