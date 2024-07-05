
#include <stdint.h>

int32_t g;

int32_t fn2() {
  for (;;) {
    int32_t r[5];
    g = r[0x06D7];
  }
}

int main() { fn2(); }
