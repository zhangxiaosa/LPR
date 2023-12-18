#include <stdio.h>

unsigned g;

int main() {
  unsigned j = 0x24F96B7BL;
  if (g) {
    while (j) {
      --j;
      g = g >> 1L;
    }
  }
}
