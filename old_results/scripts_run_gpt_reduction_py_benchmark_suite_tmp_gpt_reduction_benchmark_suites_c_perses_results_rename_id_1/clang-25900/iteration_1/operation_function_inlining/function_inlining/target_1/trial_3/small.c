#include <stdint.h>

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
int t;
int v;

int fn4() {
  struct m ad = {1957};
  ad.o = 5;
  ad.o = 0;
  r = t % (~s / ad.o);
}

int main() {
  fn4();
}
