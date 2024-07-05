
#include <stdint.h>

uint32_t g;
uint32_t fn2() {
  uint32_t r[5];
  for (;;) {
    g = 0xC3;
  }
}

int main() {
  fn2();
}
