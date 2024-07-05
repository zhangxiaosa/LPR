
#include <stdio.h>

typedef unsigned uint;
uint fn1(uint p1, int p2) { return p2; }
struct m {
  int n : 18;
  int o : 1;
};
int r;
static int s = -5;
int u;

int fn4() {
  struct m ad = {1957};
  ad.o = fn1(0, 5);
  int ae;
  int af;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}

int main() { fn4(); }
