#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned fn2() {
  struct h p;
  int q;
  p.k;
w:
  goto w;
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
