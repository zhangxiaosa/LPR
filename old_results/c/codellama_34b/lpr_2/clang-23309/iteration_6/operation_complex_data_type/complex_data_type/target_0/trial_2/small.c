
#include <stdio.h>

// Decomposition of complex data type into primary data types
unsigned char ac = 1;
short an = 0x294A;
short ao = 0xBCD1;
int temp;
int v_int;

int main() {
  // Calculate the checksum
  temp = ao - (1 - an);
  v_int = temp - (ac || (an = 0)) & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
