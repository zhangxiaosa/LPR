#include <stdint.h>

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
int t;
int v;

int main() {
  struct m ad = {1957};
  ad.o = 5; // Replace fn1(v, 5) with 5
  signed ae = ad.o;
  ad.o = 0;
  r = t % (~s / ae);
  ad.o;
}
