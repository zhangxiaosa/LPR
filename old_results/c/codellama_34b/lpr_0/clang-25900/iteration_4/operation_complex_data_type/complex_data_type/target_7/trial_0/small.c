
#include <stdio.h>

int g(int p1, int p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

int r;
int t;

int main() {
  struct m ad = {1957};
  int p1 = 5;
  int p2 = 5;
  ad.o = g(p1, p2);
  int ae = ad.o;
  ad.o = 5;
  r = t % (17 / ae);
  ad.o;
}

int g_p1 = 5;
int g_p2 = 5;
int g_return = g(g_p1, g_p2);
int ad_o = g_return;
int ae = ad_o;
ad.o = 5;
int t_mod = t % (17 / ae);
int ad_o_final = ad.o;
