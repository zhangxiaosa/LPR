#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  struct h r;
  fn1(p);
  for (;;)
    p = r = p;
}

int main() {
  // No changes to the main function
  return 0;
}
