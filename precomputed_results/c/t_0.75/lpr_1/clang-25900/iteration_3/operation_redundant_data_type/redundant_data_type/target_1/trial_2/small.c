#include <stdio.h>

struct m {
  int n : 18;
  int o : 1;
};

int r;
unsigned int t;

int main() {
  struct m ad = {1957};
  ad.o = 5;
  signed ae;
  ae = ad.o;
  ad.o = 0;
  r = t % (4 / ae);
  ad.o;
}