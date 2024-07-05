#include <iostream>

signed g;

int main() {
  signed i;
  int j = 0x24F96B7B;
  unsigned k;
  signed n = g;
  int o = n;

q:
  k = k >> 1;
  i = o;
  if (i) {
    k = k << j;

    // Unrolled loop body:
    if (j) {
      --j;
      if (j) {
        --j;
        if (j) {
          --j;
          if (j) {
            --j;
          }
        }
      }
    }

    goto q;
  }

  return 0;
}