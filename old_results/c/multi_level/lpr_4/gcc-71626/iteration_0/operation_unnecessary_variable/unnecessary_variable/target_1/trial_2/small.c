#include <iostream>

typedef long a;

void fn1() {}

typedef long __attribute__((__vector_size__(sizeof(a)))) a_vector;

a_vector fn2() {
  return {};
}

int main() {}
