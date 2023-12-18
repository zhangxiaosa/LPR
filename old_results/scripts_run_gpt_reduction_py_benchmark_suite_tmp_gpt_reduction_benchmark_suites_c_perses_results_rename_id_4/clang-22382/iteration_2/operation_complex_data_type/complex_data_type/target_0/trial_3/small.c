#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  p5.k;
  while (1) {
  }
  return p5;
}

unsigned fn2() {
  int p_i;
  long p_j;
  int p_k;

  struct h p;
  p = fn1(p);

  while (1) {
    struct h r;
    p = r = p;
  }
}

int main() {
  // Main function
  return 0;
}