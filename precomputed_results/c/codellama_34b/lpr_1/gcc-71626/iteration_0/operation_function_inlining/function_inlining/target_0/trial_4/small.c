
#include <stddef.h>

typedef long a;

d fn2() {
  a c = fn1();
  d f = {c};
  return f;
}

main() {}

// Optimized version of fn1() using function inlining
d fn1_opt() {
  a c = fn1();
  d f = {c};
  return f;
}

// Wrap the optimized function in a macro to ensure it is only defined once
#define fn1 fn1_opt
