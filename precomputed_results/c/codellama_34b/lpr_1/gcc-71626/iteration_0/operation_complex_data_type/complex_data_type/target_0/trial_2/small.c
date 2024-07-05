
#include <iostream>
#include <vector>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c = fn1;
  d f = {c};
  return f;
}

int main() {
  d result = fn2();
  std::cout << "result: " << result << std::endl;
  return 0;
}
