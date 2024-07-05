#include <stdio.h>

typedef long a;

typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  a c;
  d f;
  c = 0;
  f = {c};
  return f;
}

int main() {
  d result = fn2();
  printf("Result: %ld\n", result[0]);
  return 0;
}
