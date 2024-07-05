#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4,
                    struct h p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2(p1) {
  int p_i;
  long p_j;
  int p_k;
  fn1(0, 0, p1, 3, (struct h){p_i, p_j, p_k});
  for (;;) {
    int r_i;
    long r_j;
    int r_k;
    struct h r = {r_i, r_j, r_k};
    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
  }
}

int main() {
  return 0;
}