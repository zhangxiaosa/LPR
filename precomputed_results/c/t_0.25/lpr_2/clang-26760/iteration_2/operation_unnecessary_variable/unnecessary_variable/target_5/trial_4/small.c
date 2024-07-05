#include <iostream>

unsigned f;
signed g;
int main() {
  int j = 0x24F96B7B;
  unsigned k = 0; // Initialize k
  for (f = 0u; f;)
    for (; j; --j)
      ;
  unsigned p = g; // Replace p with g
q:
  k = k >> 1;
  if (p) {
    k = k << j; // Undefined behavior
    goto q;
  }
}