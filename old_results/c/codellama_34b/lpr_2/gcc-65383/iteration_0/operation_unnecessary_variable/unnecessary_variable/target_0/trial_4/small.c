
#include <stdint.h>
typedef uint32_t b;
b h[] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};
uint32_t fn2() {
  for (;;) {
    if (h[2])
      return 0xC3L;
  }
}
int main() {
  fn2();
}
