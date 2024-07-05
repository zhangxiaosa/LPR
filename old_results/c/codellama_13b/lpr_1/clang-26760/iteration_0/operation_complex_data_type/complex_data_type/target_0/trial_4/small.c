
#include <stdio.h>

int main() {
  unsigned d;
  signed a;
  signed b;
  unsigned e;
  unsigned k = 0;
  const long j = 0x24F96B7BL;
  signed i = 0;
  long o = 0;

  for (d = 0; d;) {
    for (; j; --j) {
      k = k >> 1L;
      i = o;
      if (i) {
        k = k << j;
      }
    }
  }

  printf("%u\n", k);

  return 0;
}
