#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4,
                    struct h p5) {
  int p5_i = p5.i;
w:
  goto w;
}

unsigned fn2(p1) {
  int p_i;
  long p_j;
  int p_k;
  int r_i;
  long r_j;
  int r_k;

  fn1(0, l, p1, 3, (struct h){p_i, p_j, p_k});

  for (;;) {
    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
    r_i = p_i;
    r_j = p_j;
    r_k = p_k;
  }
}

int main() {}
