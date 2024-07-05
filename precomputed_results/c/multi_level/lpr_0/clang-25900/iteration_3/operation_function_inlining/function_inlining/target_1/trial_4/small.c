#include <iostream>

int r;

struct m {
  int n : 18;
  int o : 1;
};

int fn4() {
  struct m ad = {1957};
  ad.o = 5;
  int ae;
  ae = ad.o;
  ad.o = 0;
  r = r % (5 / ae);
  return ad.o;
}

int main() {
  fn4();
}