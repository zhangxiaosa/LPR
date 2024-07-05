
#include <stdio.h>

typedef long a;

// Function fn1 is not used in the program, so it can be removed
// fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(a))));

// Function fn2 can be optimized by inlining the call to fn1
d fn2() {
  a c = fn1();
  d f = {c};
  return f;
}

int main() {
  d result = fn2();
  // Do something with the result
  printf("%ld\n", result);
  return 0;
}
