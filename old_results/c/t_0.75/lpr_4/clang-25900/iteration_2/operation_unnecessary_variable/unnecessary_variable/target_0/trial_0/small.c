#include <iostream>

unsigned t;

unsigned fn1(unsigned p2) {
  return p2;
}

int main() {
  signed ae;
  ae = fn1(5);
  int r = t % (5 / ae);

  std::cout << r << std::endl;

  return 0;
}