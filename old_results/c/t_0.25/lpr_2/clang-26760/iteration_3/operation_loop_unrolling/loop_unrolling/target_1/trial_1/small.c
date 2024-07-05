#include <iostream>

unsigned f;
signed g;

int main() {
  int j = 0x24F96B7B;
  unsigned k;
  
  // Loop unrolling optimization
  f = 0u;
  
  unsigned p = g;
q:
  k = k >> 1;
  if (p) {
    k = k << j;
    goto q;
  }
}