
#include <iostream>
#include <cstdint>

// Decomposition of `u` into primary data types
int u = 0;

int main() {
  unsigned v = 0;
  int ae = 0;
  int r = 0;

  // `g` function
  unsigned g(unsigned p1, int p2) {
    return p2;
  }

  // `m` struct
  struct m {
    signed n : 18;
    signed o : 1;
  };

  // `ad` struct instance
  struct m ad = {1957};

  // Assign `g(v, 5)` to `ad.o`
  ad.o = g(v, 5);

  // Assign `u` to `ad.o`
  ad.o = u;

  // Calculate `r` using `t`, `s`, and `ae`
  r = t % (~s / ae);

  // Print the result
  std::cout << r << std::endl;

  return 0;
}

