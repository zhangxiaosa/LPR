#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned int l;

static struct h fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4,
                    int p5_i, long p5_j, int p5_k) {
  p5_k;
w:
  goto w;
}

unsigned int fn2(unsigned int p1) {
  int p5_i;
  long p5_j;
  int p5_k;
  int p;
  int q;
  fn1(q, l, p1, 3, p5_i, p5_j, p5_k);
  for (;;) {
    int r_i;
    long r_j;
    int r_k;
    p5_i = r_i = p5_i;
    p5_j = r_j = p5_j;
    p5_k = r_k = p5_k;
  }
}

int main() {}
