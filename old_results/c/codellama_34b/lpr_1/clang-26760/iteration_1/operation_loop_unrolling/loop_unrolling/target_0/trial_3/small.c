
#include <stdio.h>

int main() {
  int i;
  int j = 0x24F96B7BL;
  unsigned k;
  
  // Loop unrolling
  j = j >> 1;
  i = j;
  if (i) {
    k = k << j;
    goto q;
  }

  int n = g;
q:
  k = k >> 1;
  i = n;
  if (i) {
    k = k << j;
    goto q;
  }
}
