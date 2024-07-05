
#include <iostream>

struct m {
  int n : 18;
  int o : 1;
};

int g(int p2) {
  return p2;
}

int main() {
  struct m ad = {1957};
  int ae = g(5);
  ad.o = ae;
  ad.o = 5;
  int r = t % (17 / ae);
  std::cout << ad.o << std::endl;
  return 0;
}
