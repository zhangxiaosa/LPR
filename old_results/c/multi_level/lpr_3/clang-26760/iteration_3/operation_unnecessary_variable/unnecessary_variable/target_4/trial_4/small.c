#include <stdint.h>

int32_t g;

int main() {
  int32_t j = 0x24F96B7B;
  uint32_t p = g;
  if (p) {
    goto q;
  }
  
q:
  goto q;
}