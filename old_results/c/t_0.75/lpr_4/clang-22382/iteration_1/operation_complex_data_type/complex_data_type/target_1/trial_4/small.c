#include <stdio.h>

int main() {
  int h_i;
  long h_j;
  int h_k;

  static int fn1_i;
  static long fn1_j;
  static int fn1_k;

  unsigned int fn2_p_i;
  unsigned long fn2_p_j;
  unsigned int fn2_p_k;
  int fn2_q;

  struct h {
    int i;
    long j;
    int k;
  };

  static struct h fn1(unsigned int p1, unsigned int p3, struct h p5) {
    p5.k;

  w:
    goto w;
  }

  struct h p;

  fn1(fn2_q, 3, p);

  for (;;) {
    struct h r;
    p = r = p;
  }

  return 0;
}