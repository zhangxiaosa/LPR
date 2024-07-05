#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned fn2(p1) {
  struct h p;
  {
    // Inlined body of fn1
    p.k;
w:
    goto w;
  }
  for (;;) {
    p = p;
  }
}