#include <stdio.h>

struct original_data_type {
  int i;
  long j;
  unsigned k;
};

unsigned fn2() {
  struct original_data_type p;
  struct original_data_type r;

  while (1) {
    p = r = p;
  }
}

int main() {
  fn2();
}