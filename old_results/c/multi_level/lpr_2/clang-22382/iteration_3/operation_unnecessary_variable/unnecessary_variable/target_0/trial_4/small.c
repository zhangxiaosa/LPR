#include <stdio.h>

struct Data {
  int i;
  long j;
  unsigned k;
};

static struct Data fn1(struct Data p5) {
w:
  goto w;
}

unsigned fn2() {
  struct Data p;
  fn1(p);
  for (;;) {
    struct Data r1;
    r1 = r1; // Replaced p = r1 with r1 = r1
  }
}

int main() {
  return 0;
}
