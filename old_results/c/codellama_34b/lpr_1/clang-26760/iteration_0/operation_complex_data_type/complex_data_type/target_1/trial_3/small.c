
#include <stdio.h>

typedef int c;

int main() {
  int j = 0x24F96B7BL;
  int k = 0;
  int i = 0;
  int n = 0;

  for (int f = 0; f < j; f++) {
    k = k >> 1L;
    i = n;
    if (i) {
      k = k << j;
      goto q;
    }
  }

  q:;

  printf("j = %d, k = %d, i = %d, n = %d\n", j, k, i, n);

  return 0;
}
