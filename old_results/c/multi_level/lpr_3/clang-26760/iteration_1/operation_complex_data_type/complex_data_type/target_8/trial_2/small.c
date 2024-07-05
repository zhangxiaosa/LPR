#include <stdint.h>

int32_t a;
int32_t c;
uint32_t d;
uint32_t e;

uint32_t f;
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
  int32_t n = g;
  uint32_t p = n;

q:
  k = k >> l;
  i = p;

  if (i) {
    k = k << m;
    goto q;
  }

  return 0;
}