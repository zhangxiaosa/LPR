#include <stdio.h>

typedef unsigned g;

struct m {
  signed n : 18;
  signed o : 1;
};

static signed s = -5L;
g t;
int r;
g u;
g v;

int main() {
  struct m ad = {1957};
  ad.o = 5;
  int af = t;
  ad.o = u;
  r = af % (-(-s - 1) / ad.o);

  struct m ad2 = {1957};
  ad2.o = 5;
  int af2 = t;
  ad2.o = u;
  r = af2 % (-(-s - 1) / ad2.o);

  struct m ad3 = {1957};
  ad3.o = 5;
  int af3 = t;
  ad3.o = u;
  r = af3 % (-(-s - 1) / ad3.o);
}