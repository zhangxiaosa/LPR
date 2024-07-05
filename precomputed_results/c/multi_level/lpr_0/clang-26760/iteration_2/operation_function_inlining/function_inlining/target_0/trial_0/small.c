#include <iostream>

typedef int a;
a g;

inline void q(unsigned& k, a& i, int& j) {
  k = k >> 1;
  i = g;
  if (i) {
    k = k << j;
    q(k, i, j);
  }
}

int main() {
  a i;
  int j = 0x24F96B7B;
  unsigned k;
  for (unsigned f; f;)
    for (; j; --j)
      ;

  q(k, i, j); // Inlined function q()

  return 0;
}