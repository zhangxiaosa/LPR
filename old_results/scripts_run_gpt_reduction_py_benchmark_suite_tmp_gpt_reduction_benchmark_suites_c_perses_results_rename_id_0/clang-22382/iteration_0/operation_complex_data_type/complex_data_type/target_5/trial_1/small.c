#include<iostream>

struct original_data_type {
  unsigned k;
};

unsigned l;

static struct original_data_type fn1(struct original_data_type p5) {
  p5.k;
}

unsigned fn2(int p1) {
  struct original_data_type p;
  fn1(p);
  for (;;) {
    struct original_data_type r;
    p = r = p;
  }
}

int main() {}
