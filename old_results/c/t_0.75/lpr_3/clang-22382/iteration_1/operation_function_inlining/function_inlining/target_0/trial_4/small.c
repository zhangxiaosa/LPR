#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned fn2(unsigned p1) {
  struct h p;

  for (;;) {
    struct h r;
    p = r = p;
  }
}
