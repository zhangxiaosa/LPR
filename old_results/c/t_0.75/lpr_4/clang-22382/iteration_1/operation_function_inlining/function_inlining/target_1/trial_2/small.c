#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  int q;
  {
    p.k;
w:
    goto w;
  }
}
