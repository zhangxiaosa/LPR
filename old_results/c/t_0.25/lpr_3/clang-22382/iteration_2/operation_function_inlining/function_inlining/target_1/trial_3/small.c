#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;

int fn2() {
  struct h p;
  int p5_k = p.k;
w:
  goto w;
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
