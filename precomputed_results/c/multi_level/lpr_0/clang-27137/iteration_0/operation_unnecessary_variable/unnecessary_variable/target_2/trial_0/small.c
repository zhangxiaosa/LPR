#include <stdio.h>

char p;

int main() {
  short q;
  int i;
  short r = 0;
  q = 0;
  int s = 1L;
  q = -32768;
  p = -32768;
  printf("checksum = %X\n", p);
  return 0;
}