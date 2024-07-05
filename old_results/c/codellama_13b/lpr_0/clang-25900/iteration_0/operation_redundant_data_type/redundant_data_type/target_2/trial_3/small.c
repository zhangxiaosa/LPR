
#include <stdio.h>

struct k {
  int l;
};

struct m {
  int n : 18;
  int o : 1;
};

int fn1(int p1, int p2) {
  return p2;
}

int fn2(int p1, struct m p2, struct k p3, struct k p4, int p5) {
  fn3(p5);
}

int fn3(int p1) {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  int ae;
  int af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}

int main() {
  fn4();
}
