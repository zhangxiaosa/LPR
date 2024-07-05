
#include <stdint.h>

int32_t g(int32_t p1, int32_t p2) { return p2; }

struct m {
  int32_t n : 18;
  int32_t o : 1;
};

int32_t r;
static int32_t s = -5L;
int32_t p1 = 5;
int32_t ae = 5;
int32_t t = 0;

int main() {
  r = t % (~s / ae);
}
