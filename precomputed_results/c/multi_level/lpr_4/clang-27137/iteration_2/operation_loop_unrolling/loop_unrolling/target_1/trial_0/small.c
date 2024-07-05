#include <stdio.h>

int main() {
  int q = 0;
  
  for (int loop_var = 0; loop_var < 10; loop_var++) {
    if (q > 1L)
      q -= q - 1;
    if (q > 1L)
      q -= q - 1;
    if (q > 1L)
      q -= q - 1;
    if (q > 1L)
      q -= q - 1;
    if (q > 1L)
      q -= q - 1;
  }
  
  printf("checksum = %X\n", q);
  return 0;
}