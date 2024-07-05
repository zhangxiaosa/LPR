#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static int optimizeK(unsigned p1, short p2, unsigned p3, unsigned p4, int k) {
  // Unused expression p5.k
  return k;
}

unsigned optimizeFn2(unsigned p1) {
  struct h p;
  int k = optimizeK(0, 0, p1, 3, p.k);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  return 0;
}