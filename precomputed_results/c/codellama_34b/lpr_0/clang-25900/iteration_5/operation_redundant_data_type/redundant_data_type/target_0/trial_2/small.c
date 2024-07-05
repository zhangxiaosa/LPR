
#include <iostream>

int g(int p2) {
  return p2;
}

struct m {
  int n : 18;
  int o : 1;
};

int main() {
  m ad = {1957};
  ad.o = g(5);
  int ae = ad.o;
  ad.o = 5;
  int r = t % (17 / ae);
  std::cout << ad.o << std::endl;
  return 0;
}
