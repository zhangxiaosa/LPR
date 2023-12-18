#include <stdio.h>

int main() {
  int i;
  short r = 0;

  for (i = 0; i < 10; i++) {
    r -= 10;
    r -= 10;
    r -= 10;
    r -= 10;
    r -= 10;
    r -= 10;
    r -= 10;
    r -= 10;
    r -= 10;
    r -= 10;
  }
  
  printf("checksum = %X\n", r);
  return 0;
}