#include <stdio.h>

int main() {
  long checksum = loop_var;
  
  for (loop_var = 0; loop_var < 10; loop_var++) {
    while (loop_var > 1L) {
      loop_var -= 1;
    }
  }
  
  printf("checksum = %lX\n", checksum);
  
  return 0;
}