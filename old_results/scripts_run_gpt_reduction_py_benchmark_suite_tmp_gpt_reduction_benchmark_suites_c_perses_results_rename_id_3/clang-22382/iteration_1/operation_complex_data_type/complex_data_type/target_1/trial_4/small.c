#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

static unsigned int fn1_k;

static void fn1(struct h p5) {
  fn1_k = p5.k;
  
w:
  goto w;
}

int main() {
  struct h p;
  fn1(p);
  
  for (;;) {
    struct h r;
    p.i = r.i;
    p.j = r.j;
    p.k = r.k;
  }
  
  return 0;
}
