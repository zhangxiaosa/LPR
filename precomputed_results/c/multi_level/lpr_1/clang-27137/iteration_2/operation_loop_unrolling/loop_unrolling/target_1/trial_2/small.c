#include <stdio.h>

int main() {
  int i;
  short r = 0;

  for (i = 0; i < 10; i++) {
    // Unrolled loop iteration 1
    if (r > 1L)
      r -= 1;
  
    // Unrolled loop iteration 2
    if (r > 1L)
      r -= 1;
  
    // Unrolled loop iteration 3
    if (r > 1L)
      r -= 1;
  
    // Unrolled loop iteration 4
    if (r > 1L)
      r -= 1;
  }
  
  printf("checksum = %X\n", r);
  return 0;
}