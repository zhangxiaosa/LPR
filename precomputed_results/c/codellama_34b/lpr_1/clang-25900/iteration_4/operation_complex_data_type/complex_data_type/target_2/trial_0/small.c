
#include <stdio.h>

int fn1(int p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5;
int u;

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  int ae = ad.o;
  ad.o = u;
  r = ad.o % (~s / ae);
  return 0;
}

int optimize_s(int s) {
  if (s < 0) {
    s = -s;
  }
  return s;
}

int main() {
  int s = optimize_s(-5);
  struct m ad = {1957};
  ad.o = fn1(5);
  int ae = ad.o;
  ad.o = u;
  r = ad.o % (~s / ae);
  return 0;
}
