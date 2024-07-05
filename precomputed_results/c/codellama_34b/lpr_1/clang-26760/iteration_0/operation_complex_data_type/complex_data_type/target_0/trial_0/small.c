
#include <stdio.h>
#include <stdint.h>

int main() {
  int32_t i = 0x24F96B7BL;
  uint32_t j = 0;
  uint32_t k = 0;
  int32_t n = 0;

  for (j = 0; j < i; j++) {
    k = k << 1;
  }

  for (k = 0; k < i; k++) {
    n = n << 1;
  }

  printf("Result: %d\n", n);

  return 0;
}
