#include<stdio.h>

int main() {
  short q = 0;

  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;

  printf("checksum = %X\n", q);

  return 0;
}