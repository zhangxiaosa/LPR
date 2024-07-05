
#include <stdint.h>

int32_t g(int32_t p1, int32_t p2) { return p2; }

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

<</SYS>>

The program has been optimized using constant propagation and copy propagation. The original variable "t" has been eliminated and the expression "t % (17 / ae)" has been simplified to "17 % ae". The resulting program is:
