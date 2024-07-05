#include <iostream>

typedef long a;

void fn1() {}

typedef long d __attribute__((__vector_size__(sizeof(long))));

long inline_fn2() {
  a c = fn1;
  long f = {c};
  return f;
}

int main() {
  return 0;
}