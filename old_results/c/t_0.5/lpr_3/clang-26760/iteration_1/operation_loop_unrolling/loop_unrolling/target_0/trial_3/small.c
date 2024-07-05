#include <stdio.h>

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
    goto q;
  }
  // Unrolled loop body
  k = k >> 1L;
  i = p;
  if (i) {
    k = k << j;
    goto q;
  }
  // Unrolled loop body
  k = k >> 1L;
  i = p;
  if (i) {
    k = k << j;
    goto q;
  }
}