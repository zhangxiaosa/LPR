
#include <limits.h>

int main() {
  unsigned int f;
  int g;
  unsigned int j;
  unsigned int k;
  int n;
  int i;

  f = 0;
  g = 0;
  j = 0x24F96B7BL;
  k = 0;
  n = 0;
  i = 0;

  for (f = 0; f < UINT_MAX; f++) {
    for (j = j; j < UINT_MAX; j--) {
    }
    n = g;
    while (n > 0) {
      k = k >> 1L;
      i = n;
      if (i > 0) {
        k = k << j;
      }
      n--;
    }
  }

  return 0;
}
