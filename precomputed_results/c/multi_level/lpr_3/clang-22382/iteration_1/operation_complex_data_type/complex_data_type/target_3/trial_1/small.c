#include<stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

static struct h fn1(struct h p5) {
  unsigned p5_k = p5.k;

w:
  goto w;
}

int fn2() {
  struct h p;
  int p_i;
  long p_j;
  unsigned p_k;
  
  fn1(p);
  
  for (;;) {
    struct h r;
    int r_i;
    long r_j;
    unsigned r_k;
    
    p = r = p;
  }
}

int main() {}
