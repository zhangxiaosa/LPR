#include <stdio.h>

int main() {
  int j = 0x24F96B7BL;

  if (j)
    --j;

  while (j > 0) {
    j--;
  }
}