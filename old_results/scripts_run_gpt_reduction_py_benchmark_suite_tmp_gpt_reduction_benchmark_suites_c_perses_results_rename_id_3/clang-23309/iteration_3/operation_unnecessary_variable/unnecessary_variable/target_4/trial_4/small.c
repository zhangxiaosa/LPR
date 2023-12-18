#include <stdio.h>

long v = 1;
short ac_p = 1;

int main() {
  short u;
  u = ac_p || (250 == 0x294A85636008822);
  if (1 - u & 1)
    v = 1;
  printf("checksum = %lX\n", v);
  return 0;
}