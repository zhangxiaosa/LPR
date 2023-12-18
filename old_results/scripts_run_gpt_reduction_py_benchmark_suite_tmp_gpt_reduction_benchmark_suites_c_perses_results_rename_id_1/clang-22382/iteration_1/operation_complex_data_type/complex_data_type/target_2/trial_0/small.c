#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  int p5_i = p5.i;
  long p5_j = p5.j;
  int p5_k = p5.k;
  
  p5_k;

w:
  goto w;
}

unsigned fn2() {
  struct h p;
  int p_i = p.i;
  long p_j = p.j;
  int p_k = p.k;
  
  struct h r;
  int r_i = r.i;
  long r_j = r.j;
  int r_k = r.k;
  
  p = r = p;

  for (;;) {
    p.i = p_i;
    p.j = p_j;
    p.k = p_k;
    
    r.i = r_i;
    r.j = r_j;
    r.k = r_k;
    
    p = r = p;
  }
}

int main() {
  // Main function
  return 0;
}