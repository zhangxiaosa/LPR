#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
  p5.k;

w:
  goto w;
}

unsigned fn2(p1) {
  struct h p;
  fn1(0, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  int r_i;
  long r_j;
  int r_k;

  int p_i;
  long p_j;
  int p_k;

  unsigned p1;

  // fn1
  int fn1_i;
  long fn1_j;
  int fn1_k;

  // fn2
  int fn2_p_i;
  long fn2_p_j;
  int fn2_p_k;

  int fn2_r_i;
  long fn2_r_j;
  int fn2_r_k;

  fn1(fn2_p_i, fn2_p_j, fn2_p_k);
  for (;;) {
    fn2_r_i = fn2_p_i = fn2_r_i;
    fn2_r_j = fn2_p_j = fn2_r_j;
    fn2_r_k = fn2_p_k = fn2_r_k;
  }
}
