#include <stdio.h>

int r;
static int s = -5L;
unsigned t;

struct m {
  int n : 18;
  int o : 1;
};

int fn1(int p2) { return p2; }

int main() {
  struct m ad = {1957};
  ad.o = 5; // Replaced fn1(5) with the constant 5
  int ae;
  ae = ad.o;
  ad.o = ad.o;
  r = t % (~s / ae);
  ad.o;
}
