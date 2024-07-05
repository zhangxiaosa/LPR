#include <iostream>

int g;

int main() {
  int j = 0x24F96B7B;
  unsigned k;
  unsigned f = 0;

unrolled_loop:
  k = k >> 1;
  if (g) {
    for (; j; --j)
      k = k << 1;
    goto unrolled_loop;
  }
}
