
#include <stdint.h>

typedef unsigned g;

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;
g t;
int u;

int fn4_inlined(int p1) {
  int ad_n = 1957;
  int ad_o = p1;
  int ae = ad_o;
  ad_o = u;
  r = t % (~s / ae);
  return ad_o;
}

int main() {
  fn4_inlined(5);
}
