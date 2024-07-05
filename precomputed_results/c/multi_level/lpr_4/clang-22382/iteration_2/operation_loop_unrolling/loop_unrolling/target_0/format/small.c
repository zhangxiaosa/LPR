#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  p5.k;
  while (1) {
    // Loop unrolled by 4

    // Loop body 1
    // Original code within the loop

    // Loop body 2
    // Original code within the loop

    // Loop body 3
    // Original code within the loop

    // Loop body 4
    // Original code within the loop
  }
}

unsigned fn2() {
  struct h p;
  fn1(p);
  while (1) {
    struct h r;
    p = r = p;
  }
}

int main() {}
