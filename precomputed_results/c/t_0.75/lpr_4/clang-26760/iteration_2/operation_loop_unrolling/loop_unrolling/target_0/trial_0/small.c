#include <stdint.h>

signed g;

int main() {
  int32_t j = 0x24F96B7BL;
  unsigned k;
  
  if (j)
    --j;

  while (g) {
    k = k >> 1L;
    
    if (j > 0) {
      k = k << j;
      --j;
    }
    else {
      break;
    }
  }
}