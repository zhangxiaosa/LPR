#include <stdio.h>

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
unsigned t;
int u;

int main() {
  struct m ad = {1957};
  ad.o = 5;
  signed ae = ad.o = 5;
  r = t % (~s / 5);

  printf("r = %d\n", r);

  return 0;
}
