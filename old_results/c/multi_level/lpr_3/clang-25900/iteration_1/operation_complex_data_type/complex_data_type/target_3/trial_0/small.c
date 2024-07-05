#include <stdio.h>

unsigned fn1(unsigned p1, int p2) {
  return p2;
}

signed n; // Bit field 'n' from struct 'm'
signed o; // Bit field 'o' from struct 'm'
int r;
static signed s = -5;
int u;

int main() {
  struct m {
    signed n : 18;
    signed o : 1;
  } ad = {1957};

  n = ad.n;
  o = ad.o;

  o = fn1(5, 5);
  signed ae;
  ae = o;
  o = u;
  r = t % (~s / ae);
  o; // This line seems to be unnecessary, so it can be removed.
}
