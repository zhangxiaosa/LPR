#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned fn2() {
  struct h p;
  p.k;
  for (;;) {
    p = p;
  }
}

int main() {}
