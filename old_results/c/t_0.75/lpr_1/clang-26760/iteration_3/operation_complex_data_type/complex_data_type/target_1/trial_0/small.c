#include <stdio.h>

int g;

int main() {
  int j = 0x24F96B7BL;

  if (j)
    --j;

  while (g) {
    j = j << 1;
  }

  return 0;
}
