#include <stdint.h>

int32_t f;
int32_t g;

int main() {
  uint32_t p = g;

q:
  if (p) {
    goto q;
  }
}
