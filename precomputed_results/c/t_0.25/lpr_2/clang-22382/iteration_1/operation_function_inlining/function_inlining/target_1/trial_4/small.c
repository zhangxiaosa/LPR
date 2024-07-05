#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;

unsigned fn2() {
  struct h p;
  p.k;
w:
  goto w;
}

int main() {}
