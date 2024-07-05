#include <stdio.h>

struct h {
  short i;
  long j;
  unsigned k;
};

unsigned l;

unsigned fn2() {
  struct h p;
  int q;
  // Inlined content of fn1
  while (1) {
    struct h r;
    p = r = p;
  }
}

int main() {
  // Call the fn2 function
  fn2();
  return 0;
}
