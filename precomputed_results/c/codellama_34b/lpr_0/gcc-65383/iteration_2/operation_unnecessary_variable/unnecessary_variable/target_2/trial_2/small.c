
#include <stdint.h>

int32_t g;
int16_t h2_0 = 0x92A1;

int32_t fn2() {
  int32_t r = 0x06D7; // r is a constant, so we can propagate its value
  if (h2_0)
    return 0x92A1;
  g = r; // r is no longer used, so we can eliminate it
}

int main() {
  fn2();
}
