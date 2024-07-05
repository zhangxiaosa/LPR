#include <stdio.h>

unsigned g;

int main() {
  int j = 0x24F96B7AL;
  unsigned k;
  if (j)
    --j;

  // Unrolled loop body
  k = k >> 1L;
  if (g)
    k = k << j;

  k = k >> 1L;
  if (g)
    k = k << j;

  // Repeat the above two lines as needed

  // Rest of the program (if any)
}
