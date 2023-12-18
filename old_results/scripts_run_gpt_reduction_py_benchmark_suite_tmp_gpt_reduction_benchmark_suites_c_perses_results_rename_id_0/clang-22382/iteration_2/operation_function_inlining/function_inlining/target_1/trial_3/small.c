#include <stdio.h>

struct original_data_type {
  int i;
  long j;
  unsigned k;
};

struct original_data_type fn2() {
  struct original_data_type p;
  unsigned p1 = 0;
  struct original_data_type p5 = p;

  // Inline the body of fn1
w:
  p5.k;
  goto w;

  // Rest of the fn2 function
  for (;;) {
    struct original_data_type r;
    p = r = p;
  }
}

int main() {
  fn2();
  return 0;
}