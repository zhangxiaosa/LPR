#include <stdio.h>

// Original typedef declarations
typedef unsigned int d;
typedef unsigned int e;
typedef unsigned int f;
typedef unsigned int g;

// Original struct definition
struct h {
  signed int i;
  long j;
  unsigned int k;
};

// Original variable declaration

// Original function declaration
static struct h fn1(f, short, g, d, struct h);

// Modified function definition
// Replaced e with unsigned int in the parameter
unsigned int fn2(unsigned int p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

// Modified function definition
// Replaced d with unsigned int in the parameter
struct h fn1(f p1, short p2, g p3, unsigned int p4, struct h p5) {
  p5.k;

w:;
  goto w;
}

int main() {
  return 0;
}