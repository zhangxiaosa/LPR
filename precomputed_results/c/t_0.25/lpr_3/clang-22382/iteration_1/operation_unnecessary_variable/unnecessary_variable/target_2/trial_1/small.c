#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, struct h p5) {
  // No modifications to p5.k
  // Variable k is not used
  for (;;) {
    // Infinite loop
  }
}

int fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  // Empty main function
  return 0;
}