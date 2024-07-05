#include <stdio.h>

struct original_data_type {
  int i;
  long j;
  unsigned k;
};

unsigned fn2() {
  struct original_data_type p;
  p.k;
w:
  goto w;
  while (1) {
    struct original_data_type r;
    p = r = p;
  }
}

int main() {
  // Code optimized via function inlining
  unsigned p1 = 0;
  struct original_data_type p;
  p.k;
w1:
  goto w1;
  while (1) {
    struct original_data_type r;
    p = r = p;
  }
}
