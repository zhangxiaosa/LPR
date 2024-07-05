#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static void fn1(unsigned p1, struct h p5) {
  // p5.k is not used
  for (;;) {
    // Infinite loop
  }
}

unsigned fn2() {
  struct h p;
  // fn1 is called, but the return value is not used
  for (;;) {
    struct h r;
    p = r = p;
    // p is continuously assigned to r and back to p
  }
}

int main() {
  // Empty main function
  return 0;
}