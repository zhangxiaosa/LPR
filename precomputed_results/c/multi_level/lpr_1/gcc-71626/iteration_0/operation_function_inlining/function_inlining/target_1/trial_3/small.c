#include <stdio.h>

typedef long a;
typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  a c;
  d f;

  // Inline fn1 function body here

  f = {c};
  return f;
}

int main() {
  return 0;
}
