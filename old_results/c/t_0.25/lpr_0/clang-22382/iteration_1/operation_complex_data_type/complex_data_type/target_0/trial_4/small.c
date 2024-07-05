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

unsigned fn2() {
  struct h p;
  int p_i;
  long p_j;
  int p_k;
  
  fn1(0, p);
  
  for (;;) {
    struct h r1;
    int r1_i;
    long r1_j;
    int r1_k;
    
    p_i = r1_i = p_i;
    p_j = r1_j = p_j;
    p_k = r1_k = p_k;
  }
}

int main() {}
