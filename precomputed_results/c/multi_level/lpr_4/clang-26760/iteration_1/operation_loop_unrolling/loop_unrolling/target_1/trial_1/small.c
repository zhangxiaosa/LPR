#include <iostream>

unsigned g;

int main() {
  int i;
  int j = 0x24F96B7B;
  unsigned k;
  unsigned f;

  for (; f;)
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

  for (; j; --j)
    ;

q:
  k = k >> 1;
  i = g;
  if (i) {
    k = k << j;
    goto q;
  }
}
