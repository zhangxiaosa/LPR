
#include <stdint.h>
typedef uint32_t b;

uint32_t fn2() {
  for (;;) {
    if (h[2])
      return 0xC3L;
  }
}

int main() {
  uint32_t q_real = fn2();
}
