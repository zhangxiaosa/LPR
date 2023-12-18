#include <iostream>

int main() {
  unsigned j = 0x24F96B7BL;
  unsigned k = 0;

  while (j > 0) {
    --j;
    k = k >> 1;
    k = k << j;
  }
}
