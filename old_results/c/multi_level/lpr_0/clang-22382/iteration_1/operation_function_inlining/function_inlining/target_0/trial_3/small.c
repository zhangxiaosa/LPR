#include&lt;stdio.h&gt;

struct original_data_type {
  int i;
  long j;
  unsigned k;
};

unsigned fn2() {
  struct original_data_type p;

  // Function body of fn1 inlined
  p.k;
w:
  goto w;

  // Unreachable code from fn1 after inlining
  return p;
}