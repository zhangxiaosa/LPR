
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
  int p2 = fn1(0, 5);
  int ae = ad.o;
  int af = u;
  ae = ad.o;
  ad.o = u;
  int mod = af % (~s / ae);
  int r = mod;
  ad.o = mod;
  return r;
}

int main() { fn4(); }
