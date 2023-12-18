#include <stdlib.h>

unsigned k;
unsigned m[4];
unsigned n0;

unsigned fn3() {
  unsigned r;
  unsigned s;
  unsigned v;
  unsigned w;
  unsigned a;

  for (; w; w += 4) {
    for (s = 0; s <= 39 - 3; s += 4) {
      for (r = 0; r <= 2; r += 1) {
        n0 = v;
        v = m[r];
        w = n0 && k;

        // Unrolled iterations
        n0 = 0u;
        n0 = 0u;
        n0 = 0u;
        n0 = 0u;
      }
    }

    // Remaining iterations (if any)
    for (; s <= 39; ++s) {
      for (r = 0; r <= 2; r += 1) {
        n0 = v;
        v = m[r];
        w = n0 && k;
        n0 = 0u;
      }
    }
  }

  return 0;
}

int main() {}
