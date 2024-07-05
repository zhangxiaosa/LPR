
#include <iostream>

int g(int p1, int p2) {
  return p2;
}

struct m {
  int n : 18;
  int o : 1;
};

int main() {
  struct m ad = {1957};
  int ae = g(5, 5);
  ad.o = ae;
  ad.o = 5;
  int r = t % (17 / ae);
  std::cout << "ae: " << ae << std::endl;
  return 0;
}
