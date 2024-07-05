#include <stdio.h>

struct m {
  unsigned int n : 18;
  signed int o : 1;
};

int r;
unsigned int t;

int main() {
  struct m ad = {1957};
  ad.o = 0;
  r = t % 5;
}
