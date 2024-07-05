
#include <stdint.h>

int32_t fn1(int32_t p1, int32_t p2) {
  return p1 * p2;
}

struct g {
  int32_t h;
};

int32_t i;
struct g j;

int32_t fn2(int32_t p3) {
  for (p3 = 6; p3 != -7; p3--)
    j.h ^= fn1(p3, i) && 1L;
  return 0;
}

int main() {
  return 0;
}
