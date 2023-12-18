#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

static struct h fn1(struct h p5) {
w:
  goto w;
}

int fn2() {
  struct h p;
  for (;;) {
    p = p;
  }
}

int main() {}
