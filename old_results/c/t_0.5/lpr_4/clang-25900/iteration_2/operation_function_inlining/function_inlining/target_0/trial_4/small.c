#include <stdio.h>

struct m {
  signed n : 18;
  signed o : 1;
};
int r;
static signed s = -5L;
signed t;

int main() {
  struct m ad = {1957};
  ad.o = 5;
  r = t % (~s / 5);
}