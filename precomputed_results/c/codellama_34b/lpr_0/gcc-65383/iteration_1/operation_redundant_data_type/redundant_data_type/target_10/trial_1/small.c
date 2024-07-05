
#include <stdint.h>

uint32_t g;
uint32_t fn2() {
  for (;;) {
    uint32_t r[5];
    g = r[0x06D7];
  }
}

int main() { fn2(); }
