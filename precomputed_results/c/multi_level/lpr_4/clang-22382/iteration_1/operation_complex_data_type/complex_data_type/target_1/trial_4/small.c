#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static void decompose(struct h p5) {
  int i = p5.i;
  long int j = p5.j;
  int k = p5.k;
  printf("Decomposed values: %d %ld %d\n", i, j, k);
}

unsigned long fn1(unsigned int p3, struct h p5) {
  decompose(p5);
  while (1) {
    // Infinite loop
  }
}

unsigned fn2() {
  struct h p;
  int q;
  decompose(p);
  while (1) {
    struct h r;
    p = r = p;
  }
}

int main() {
  fn2();
  return 0;
}