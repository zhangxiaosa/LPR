#include<stdio.h>

struct original_data_type {
  unsigned k;
};

static unsigned fn1(struct original_data_type p5) {
  p5.k;
  w:
  goto w;
}

unsigned fn2() {
  struct original_data_type p;
  fn1(p);
  while (1) {
    struct original_data_type r;
    p = r;
  }
}

int main() {}
