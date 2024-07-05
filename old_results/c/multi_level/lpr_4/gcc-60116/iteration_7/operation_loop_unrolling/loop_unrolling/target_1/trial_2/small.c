#include <stdint.h>
#include <stdio.h>

int32_t fn2(int32_t p1, int32_t p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

int32_t main() {
  int32_t ak;
  
  ak = 0;
  
  // Unrolled loop
  int32_t temp1 = ~(ak && 1 ? ak : ak % 1 != 0) + ak;
  int32_t temp2 = ~(ak && 1 ? ak : ak % 1 != 0) + ak;
  int32_t temp3 = ~(ak && 1 ? ak : ak % 1 != 0) + ak;
  int32_t temp4 = ~(ak && 1 ? ak : ak % 1 != 0) + ak;

  printf("checksum = %d\n", temp4 && 0x57);
  return 0;
}