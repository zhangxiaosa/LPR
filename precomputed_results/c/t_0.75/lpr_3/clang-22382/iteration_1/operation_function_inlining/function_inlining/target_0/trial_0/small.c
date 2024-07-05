#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned fn2(p1) {
  struct h p;
  p.k;
w:
  goto w;
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  fn2(0);
  return 0;
}