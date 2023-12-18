#include <iostream>

unsigned g;

int main() {
  unsigned j = 0x24F96B7BL;
q:
  if (g) {
    --j;
    goto q;
  }
}