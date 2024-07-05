#include <stdio.h>

typedef long a;
typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  a c;
  d f;

  // Inlined fn1()
  // fn1();

  f = {c};
  return f;
}

int main() {
  // Program entry point
  return 0;
}