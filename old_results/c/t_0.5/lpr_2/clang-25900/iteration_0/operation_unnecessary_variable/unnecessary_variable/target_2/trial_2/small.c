#include <stdio.h>

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
unsigned t;
int u;
unsigned v;

int main() {
  struct m ad = {1957};
  ad.o = 5;
  ad.o;
  r = t % (~(-5) / ad.o);
  ad.o;
}
