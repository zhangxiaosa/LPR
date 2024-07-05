#include <stdbool.h>

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
  fn1(3, p);
  
  // Loop unrolling
  struct h r;
  p = r = p;
  p = r = p;
  p = r = p;
  p = r = p;
  
  // Simulate the original infinite loop
  while (true) {
    struct h r;
    p = r = p;
  }
}

int main() {}
