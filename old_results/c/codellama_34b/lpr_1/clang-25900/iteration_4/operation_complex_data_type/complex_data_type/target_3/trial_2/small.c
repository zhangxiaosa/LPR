
#include <stdio.h>

int fn1(int p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s_sign = -5;
static int s_unsigned = 5;
int u;

int main() {
  struct m ad = {1957};
  int ad_o = fn1(s_unsigned);
  int ae = ad.o;
  ad.o = u;
  int r_temp = ad.o % (~s_sign / ae);
  r = r_temp;
  return 0;
}
