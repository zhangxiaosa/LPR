
#include <stdint.h>

typedef int8_t char;

int8_t fn1(int8_t p1, int8_t p2) {
  return p1 * p2;
}

struct g {
  int8_t h;
};
int8_t i;
struct g j;

int8_t *fn2(int8_t *p2, int8_t p3) {
  for (p3 = 6; p3 != -7; p3--)
    j.h ^= fn1(p3, i) && 1L;
  return p2;
}

int main() {
  return 0;
}
