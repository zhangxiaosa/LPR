#include <stdio.h>

int v;
short w;

int main() {
  int an;

  for (w = 3; w; w -= 1) {
    if (an == 250) {
      v = (0xBCD2 - an) & 1;
    }
  }

  printf("checksum = %X\n", v);

  return 0;
}