#include <stdio.h>

signed g;

int main() {
  signed i;
  int j = 0x24F96B7BL;
  unsigned k;
  if (j)
    --j;
  signed n = g;
  int o = n;
  unsigned p = o;
q:;
  k = k >> 1L;
  i = p;
  if (i) {
    k = k << j;

    // Unrolled loop body
    k = k << j;
    k = k << j;
    k = k << j;
    // ... repeat the body as needed

    // Loop condition is removed
  }
}
