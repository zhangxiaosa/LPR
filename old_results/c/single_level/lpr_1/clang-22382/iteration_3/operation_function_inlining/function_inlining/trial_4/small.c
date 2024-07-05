#include <stdio.h>

// Typedefs
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

// Structure definition
struct h {
  signed i;
  long j;
  unsigned k;
};

// Global variable
static d l;

// Function inlined
static struct h fn1(f p1, short p2, g p3, d p4, struct h p5) {
  p5.k;

w:
  goto w;
}

e fn2(p1) {
  struct h p;
  int q;

  // Inlined function call
  p.k;
w:
  goto w;
}

int main() {
  // Calling the inlined function
  fn2(2);
  return 0;
}