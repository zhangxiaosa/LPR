#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, unsigned p3, struct h p5) {
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, 3, p);
  
  // Loop unrolling
  const int N = 4;  // Number of loop iterations

  struct h r;
  for (int i = 0; i < N; i++) {
    p = r = p;
  }
  
  return 0;
}

int main() {
  fn2();
  
  return 0;
}
