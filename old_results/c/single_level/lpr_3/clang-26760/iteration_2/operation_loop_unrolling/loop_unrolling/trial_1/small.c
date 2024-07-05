#include <stdio.h>

typedef unsigned d;
d f;
signed g;

int main() {
  signed i;
  int j = 0x24F96B7BL;
  unsigned k;

  for (f = 0;) {
    for (; j; --j) {
      // Loop body
    }
  }

  int l = 1L;
  int m = j;

  i = g;

q:
  k = k >> l;

  if (i) {
    k = k << m;
    goto q;
  }

  return 0;
}