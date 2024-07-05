#include <stdio.h>

long v;
short ac = 1L;

int main() {
  int an;
  int p2 = ac;
  short ao = 0xBCD1L;
  
  if ((ao - (1L - an)) - p2 & 1UL)
    v = 1UL;
  
  printf("checksum = %lX\n", v);
  return 0;
}