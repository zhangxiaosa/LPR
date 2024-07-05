
#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

// Function fn1 with inlined function fn2
static struct h fn1(struct h p5) {
  p5.j;
  for (;;) {
    struct h r;
    r = r;
  }
}

unsigned fn2() {
  struct h p;
  p = fn1(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
