
#include <stdio.h>

typedef unsigned uint;
typedef short int16;

int16 fn3(int16 p1, int16 p2) { return p1 - p2; }
uint fn5(uint p1, uint p2) { return p2; }
uint fn6(uint p1, uint p2) { return p2 - p1; }

int main() {
  uint p = fn5(248UL, 248UL);
  printf("checksum = %X\n", p);
  return 0;
}
