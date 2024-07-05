#include <iostream>

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
unsigned t;

int main() {
  struct m ad = {1957};
  ad.o = (unsigned)5;
  signed ae;
  ae = ad.o;
  ad.o = 0;
  r = t % (5 / ae);
  ad.o;
}
