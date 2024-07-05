#include <limits.h>

struct h {
  int i;
  long j;
  unsigned k;
};

unsigned fn2() {
  struct h p;
  p.k;

w:
  goto w;

  for (;;) {
    struct h r1;
    p = r1 = p;
  }
}

int main() {}
