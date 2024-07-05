
#include <stdint.h>

int32_t fn4() {
  int32_t s = -5;
  int32_t r = 1957 % (~s / 5);
  return r;
}

int32_t main() {
  fn4();
}
