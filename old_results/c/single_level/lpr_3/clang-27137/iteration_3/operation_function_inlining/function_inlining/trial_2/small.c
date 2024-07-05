#include <stdio.h>

int main() {
  char h;
  short o;
  short q = o;

  while (q > 1) {
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
  }

  h = q;
  printf("checksum = %X\n", h);
  return 0;
}