#include <stdio.h>

int main() {
  int q = 0;
  int loop_var;
  
  for (loop_var = 0; loop_var < 10; loop_var++) {
    q--;
  }
  
  printf("checksum = %X\n", q);
  return 0;
}
