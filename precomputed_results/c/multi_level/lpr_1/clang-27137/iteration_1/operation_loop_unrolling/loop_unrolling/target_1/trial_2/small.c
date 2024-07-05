#include <stdio.h>

int main() {
  int i;
  short r = 0;
  
  for (i = 0; i < 10; i++) {
    while (r > 1L) {
      r -= 5;  // Unrolled iteration 1
      r -= 5;  // Unrolled iteration 2
      r -= 5;  // Unrolled iteration 3
      r -= 5;  // Unrolled iteration 4
      r -= 5;  // Unrolled iteration 5
    }
  }
  
  printf("checksum = %X\n", r);
  return 0;
}