#include<stdio.h>

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
}

int main() {
  fn2();
}
