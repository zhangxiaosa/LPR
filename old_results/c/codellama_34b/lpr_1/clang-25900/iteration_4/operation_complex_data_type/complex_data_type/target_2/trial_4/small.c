
#include <stdio.h>

int fn1(int p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s1 = -5;
static int s2 = 0;
int u;

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  int ae = ad.o;
  ad.o = u;
  int s1_val = s1;
  int s2_val = s2;
  int s1_comp = ~s1_val;
  int s2_comp = ~s2_val;
  int s1_plus_s2 = s1_val + s2_val;
  int s2_plus_s1 = s2_val + s1_val;
  int s1_plus_s2_comp = ~s1_plus_s2;
  int s2_plus_s1_comp = ~s2_plus_s1;
  int s1_plus_s2_div_ae = s1_plus_s2_comp / ae;
  int s2_plus_s1_div_ae = s2_plus_s1_comp / ae;
  int ad_o_mod_s1_plus_s2_div_ae = ad.o % s1_plus_s2_div_ae;
  int ad_o_mod_s2_plus_s1_div_ae = ad.o % s2_plus_s1_div_ae;
  int result = ad_o_mod_s1_plus_s2_div_ae + ad_o_mod_s2_plus_s1_div_ae;
  return 0;
}
