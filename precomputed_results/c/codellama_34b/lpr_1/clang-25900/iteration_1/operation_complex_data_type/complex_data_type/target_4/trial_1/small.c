
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
  int af = u;
  ae = ad.o;
  ad.o = u;
  int neg_s = -s;
  int neg_s_div_ae = neg_s / ae;
  int neg_s_mod_ae = neg_s % ae;
  r = af % (~neg_s_div_ae / neg_s_mod_ae);
  ad.o;
}

int main() { fn4(); }
