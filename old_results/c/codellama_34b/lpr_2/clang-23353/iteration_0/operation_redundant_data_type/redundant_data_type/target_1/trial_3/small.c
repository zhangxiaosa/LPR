
#include <stdint.h>

typedef int8_t a;
typedef int b;
typedef uint32_t c;

a fn1(a p1, a p2) { return p1 * p2; }
struct g {
  b h;
};
b i;
struct g j;
b *fn2(c p1, b *p2, a p3) {
  for (p3 = 6; p3 != -7; p3--)
    j.h ^= fn1(p3, i) && 1L;
  return p2;
}
int main() { return 0; }
