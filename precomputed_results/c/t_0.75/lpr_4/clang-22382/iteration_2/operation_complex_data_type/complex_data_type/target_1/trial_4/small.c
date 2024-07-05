#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static void fn1(unsigned p1, int p5_i, long p5_j, int p5_k) {
  p5_k;
w:
  goto w;
}

unsigned fn2() {
  int p_i;
  long p_j;
  int p_k;
  
  fn1(3, p_i, p_j, p_k);
  
  for (;;) {
    struct h r;
    p_i = r.i;
    p_j = r.j;
    p_k = r.k;
  }
}

int main() {
  // No changes needed
}