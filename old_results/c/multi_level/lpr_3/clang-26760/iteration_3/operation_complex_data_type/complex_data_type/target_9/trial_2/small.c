#include <stdint.h>

int32_t f;
int32_t g;

int main() {
  int32_t i;
  int32_t j = 0x24F96B7B;
  uint32_t k;

  for (f = 0; ;) {
    --j;
  }

  int32_t l = 1;
  int32_t m = j;
  int32_t o = g;

q:
  k = k >> l;
  i = o;

  if (i) {
    k = k << m;
    goto q;
  }
}
