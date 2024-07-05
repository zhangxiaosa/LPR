#include <iostream>

unsigned g;

int main() {
  signed i;
  int j = 0x24F96B7BL;
  unsigned k;
  for (unsigned f; f;) {
    // Unrolled loop
    // Iteration 1
    ;
    ;
    ;
    ;
    // Iteration 2
    ;
    ;
    ;
    ;
    // Iteration 3
    ;
    ;
    ;
    ;
    // Iteration 4
    ;
    ;
    ;
    ;
    // End of unrolled loop

q:;
  k = k >> 1L;
  if (g) {
    k = k << j;
    goto q;
  }
}