
#include <stdio.h>

// Define the data type 'struct h' globally
struct h {
  long i;
  long j;
  long k;
};

// Define the function 'fn1' that takes a 'struct h' parameter
static struct h fn1(long p1, long p4, struct h p5) {
  p5.k;
w:;
  goto w;
}

// Define the function 'fn2' that takes a 'long' parameter
long fn2(long p1) {
  struct h p;
  fn1(p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  struct h p;
  fn1(1, 3, p);
  fn2(2);
  return 0;
}
