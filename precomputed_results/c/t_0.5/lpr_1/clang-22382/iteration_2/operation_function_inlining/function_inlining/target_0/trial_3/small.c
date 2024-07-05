#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

struct h fn1(struct h p5) {
  p5.k;
}

unsigned fn2() {
  struct h p;
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  return 0;
}
