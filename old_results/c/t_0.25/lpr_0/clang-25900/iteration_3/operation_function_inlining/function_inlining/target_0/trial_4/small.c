#include <iostream>

struct m {
  int n : 18;
  int o : 1;
};

int r;
static signed s = -5L;
unsigned t;
int u;

long fn4() {
  struct m ad = {1957};
  ad.o = 5; // Inlined fn1(5)
  signed ae;
  ae = ad.o;
  ad.o = u;
  r = t % (~s / ae);
  ad.o;
}

int main() {
  fn4();
}