
#include <stdio.h>
#include <stdint.h>

struct m {
  uint16_t n : 18;
  uint16_t o : 1;
};

int g(int p1, int p2) {
  return p2;
}

int main() {
  struct m ad = {1957};
  ad.o = g(5, 5);
  int ae = ad.o;
  ad.o = 5;
  uint16_t r = (17 / ae) % t;
  ad.o;
}
