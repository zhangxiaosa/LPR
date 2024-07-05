#include <stdio.h>

int l;

struct h {
  int i;
  long j;
  int k;
};

int fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4, int p5_i) {
w:
  goto w;
}

unsigned int fn2(unsigned int p1) {
  int p_i;
  long p_j;
  int p_k;
  int r_i;
  long r_j;
  int r_k;

  fn1(0, l, p1, 3, p_i);

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
