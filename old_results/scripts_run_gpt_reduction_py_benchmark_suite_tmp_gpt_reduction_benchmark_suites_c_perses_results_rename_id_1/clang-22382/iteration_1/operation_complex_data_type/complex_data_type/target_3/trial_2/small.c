#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  p5.k;
w:
  goto w;
}

unsigned int fn2() {
  struct h p;
  int r_i;
  long r_j;
  int r_k;
  fn1(p);
  for (;;) {
    int p_i;
    long p_j;
    int p_k;
    int r_i;
    long r_j;
    int r_k;
    p = r = p;
  }
}

int main() {
  // Main function
  return 0;
}