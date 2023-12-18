#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static inline struct h fn1(struct h p5) {
  p5.k;
  while (1) {
    // Code from fn1
  }
}

unsigned fn2() {
  struct h p;

  // Inlined code from fn1
  p.k;
  while (1) {
    struct h r;
    p = r = p;
  }
}

int main() {
  return 0;
}