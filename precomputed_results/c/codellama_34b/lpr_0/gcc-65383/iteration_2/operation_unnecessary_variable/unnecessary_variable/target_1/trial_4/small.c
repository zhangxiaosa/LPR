
#include <stdint.h>

int32_t g;

int16_t fn2() {
  for (;;) {
    g = 0x92A1;
  }
  return g;
}

int main() {
  fn2();
}
