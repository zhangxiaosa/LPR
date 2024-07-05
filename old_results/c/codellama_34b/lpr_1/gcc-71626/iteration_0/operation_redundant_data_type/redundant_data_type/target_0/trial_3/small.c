
#include <stdio.h>

typedef long a;

long fn1() {
  return 1;
}

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c = fn1();
  d f = {c};
  return f;
}

int main() {
  fn2();
  return 0;
}
