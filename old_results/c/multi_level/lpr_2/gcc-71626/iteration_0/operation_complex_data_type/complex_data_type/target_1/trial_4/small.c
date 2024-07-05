#include <stdio.h>

typedef long d_elements[sizeof(long)];

void fn1() {}

d_elements fn2() {
  long c = fn1;
  d_elements f = {c};
  return f;
}

int main() {}
