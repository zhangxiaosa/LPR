#include <iostream>

signed g;

int main() {
  signed i;
  int j = 0x24F96B7B;
  unsigned f;
  unsigned k;
  for (f = 0;)
    for (; j >= 4; j -= 4) {
      // Unrolled iteration 1
      ;
      // Unrolled iteration 2
      ;
      // Unrolled iteration 3
      ;
      // Unrolled iteration 4
      ;
    }

  // Handle remaining iterations (less than 4)
  for (; j; --j) {
    ;
  }

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
}