#include <stdint.h>
int32_t f;
int32_t g;
int main() {
  int32_t i;
  int32_t j = 0x24F96B7B;
  int32_t k;
  for (f = 0;)
    --j;
  int32_t l = 1;
  int32_t m = j;
  int32_t n = g;
  int32_t o = n;
  int32_t p = o;
q:
  k = (int32_t)((uint32_t)k >> l);
  i = p;
  if (i) {
    k = (int32_t)((uint32_t)k << m);
    goto q;
  }
}