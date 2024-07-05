#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p3, struct h p5) {
  p5.k;
  while (1) {
    // Infinite loop
  }
}

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, p);
  while (1) {
    struct h r;
    p = r = p;
    // Infinite loop
  }
}

int main() {
  // Main function
}
