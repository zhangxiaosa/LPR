#include <stdio.h>

struct original_data_type {
  int i;
  long j;
  unsigned k;
};

struct original_data_type fn2() {
  struct original_data_type p;
  p.k;
w:
  goto w;
  for (;;) {
    struct original_data_type r;
    p = r = p;
  }
}
