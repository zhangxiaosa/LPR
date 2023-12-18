#include <stdint.h>

struct m {
  signed n : 18;
  signed o : 1;
};

int main() {
  struct m ad = {1957};
  ad.o = 5;
  int r;
  signed s = -5L;
  int t;
  int v;
  r = t % (~s / ad.o);
}