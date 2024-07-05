#include <stdio.h>

int main() {
  signed i;
  int j = 0x24F96B7BL;
  int f;
  unsigned k;

  for (f = 0; ; ) {
    for (; j; --j) {
      // inner for-loop
    }
    // outer for-loop
  }

  int m = j;
  i = g;

q:
  k = k >> 1;
  if (i) {
    k = k << m;
    goto q;
  }

  return 0;
}