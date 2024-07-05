#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static int fn1_k();
unsigned fn2() {
  struct h p;
  fn1_k();
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int fn1_k() {
  return 0;
}

int main() {
  return 0;
}
