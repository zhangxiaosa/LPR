#include <stdio.h>

unsigned f;
signed g;

int main() {
  signed i;
  int j = 0x24F96B7B;
  unsigned k;

  int l = 1L;
  int m = j;

  k = k >> l;
  i = j;

  while (j >= 4) {
    // Unrolled loop body
    j -= 4;
    // Loop iteration 1
    k = k << m;
    // Loop iteration 2
    k = k << m;
    // Loop iteration 3
    k = k << m;
    // Loop iteration 4
    k = k << m;
  }

  if (i >= 4) {
    k = k << m;
  }
}