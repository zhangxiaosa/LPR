#include <stdio.h>

struct m {
  int n : 18;
  int o : 1;
};

int r;

int main() {
  struct m ad = {1957};
  ad.o = 5;
  r = 1957 % (5 / 5);
}