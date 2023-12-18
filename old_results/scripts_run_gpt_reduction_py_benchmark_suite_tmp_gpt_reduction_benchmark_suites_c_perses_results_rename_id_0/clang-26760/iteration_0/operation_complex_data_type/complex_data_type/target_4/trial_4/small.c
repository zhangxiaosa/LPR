#include <iostream>

int main() {
  typedef unsigned int e;

  e k = 0;

q:
  k >>= 1;

  if (k) {
    goto q;
  }

  return 0;
}
