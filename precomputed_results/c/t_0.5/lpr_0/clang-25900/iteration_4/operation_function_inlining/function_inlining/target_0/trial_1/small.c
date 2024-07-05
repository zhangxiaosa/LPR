#include <stdio.h>

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;

int main() {
  struct m ad = {1957};
  ad.o = 5;
  r = r % (~s / ad.o);
}
