#include <stdio.h>

struct original_data_type {
  int i;
  long j;
  unsigned k;
};

static unsigned fn1(unsigned p1) {
  p1;
  w:
    goto w;
}

unsigned fn2() {
  fn1(0);
  while (1) {
    struct original_data_type r;
  }
}

int main() {}
