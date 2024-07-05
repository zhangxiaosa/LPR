#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

int fn2() {
  struct h p;
  for (;;) {
    p = p;
  }
}
