#include <stdio.h>

struct original_data_type {
  int i;
  long j;
  unsigned k;
};

static unsigned fn1(struct original_data_type p5) {
w:
  goto w;
}

unsigned fn2() {
  struct original_data_type p;
  while (1) {
    struct original_data_type r;
    p = r = p;
  }
}

int main() {}
