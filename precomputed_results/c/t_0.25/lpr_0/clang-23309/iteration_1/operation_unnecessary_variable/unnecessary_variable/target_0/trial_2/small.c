#include <stdio.h>

long v;

int main() {
  if (250UL) {
    if (1UL)
      v = 1;
  }
  printf("checksum = %X\n", v);
  return 0;
}