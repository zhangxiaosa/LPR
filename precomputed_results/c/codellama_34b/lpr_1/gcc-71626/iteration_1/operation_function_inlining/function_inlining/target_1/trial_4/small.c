
#include <iostream>

typedef long d __attribute__((__vector_size__(sizeof(long))));

void fn1() {}

d fn2() {
  long c = fn1();
  d f = {c};
  return f;
}

int main() {
  d result = fn2();
  std::cout << result << std::endl;
  return 0;
}
