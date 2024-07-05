#include <iostream>

signed g;

int main() {
  signed i;
  int j = 0x24F96B7B;
  unsigned f;
  unsigned k;
  signed n = g;
  int o = n;
  unsigned p = o;
q:
  k = k >> 1;
  i = p;
  if (i) {
    k = k << j;
    goto q;
  }

  // Optimized loop unrolling
  for (; j >= n; j -= n) {
    // Loop body
  }
}
