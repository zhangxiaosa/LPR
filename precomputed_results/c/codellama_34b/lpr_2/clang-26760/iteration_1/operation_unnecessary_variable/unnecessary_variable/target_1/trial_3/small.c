
#include <stdint.h>

int16_t fn1() {
  for (uint32_t f; f;)
    ;
  if (f) {
    f = f << 8;
    goto q;
  }
}

int main() {}
