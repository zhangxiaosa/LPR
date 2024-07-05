
#include <iostream>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  d f = {1};
  return f;
}

int main() {
  std::cout << "The result of fn2() is: " << fn2() << std::endl;
  return 0;
}
