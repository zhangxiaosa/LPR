#include <stdio.h>

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
unsigned t;

int main() {
  struct m ad = {1957};
  ad.o = 5;
  signed ae;
  ae = ad.o;
  r = t % (5 / ae);
  ad.o;
}
