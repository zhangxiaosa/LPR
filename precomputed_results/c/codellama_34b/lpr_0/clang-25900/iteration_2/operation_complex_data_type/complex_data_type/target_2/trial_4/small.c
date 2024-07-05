
#include <stdint.h>

int32_t g(int32_t p1, int32_t p2) {
  return p2;
}

struct m {
  int32_t n : 18;
  int32_t o : 1;
};

int32_t r;
int32_t t;
int32_t v;

int main() {
  struct m ad = {1957};
  ad.o = g(v, 5);
  int32_t ae = ad.o;
  ad.o = 5;
  r = t % (17 / ae);
  ad.o;
}

/* Optimized code */

int32_t g_optimized(int32_t p1, int32_t p2) {
  return p2;
}

struct m_optimized {
  int32_t n_optimized : 18;
  int32_t o_optimized : 1;
};

int32_t r_optimized;
int32_t t_optimized;
int32_t v_optimized;

int main_optimized() {
  struct m_optimized ad_optimized = {1957};
  ad_optimized.o_optimized = g_optimized(v_optimized, 5);
  int32_t ae_optimized = ad_optimized.o_optimized;
  ad_optimized.o_optimized = 5;
  r_optimized = t_optimized % (17 / ae_optimized);
  ad_optimized.o_optimized;
}
