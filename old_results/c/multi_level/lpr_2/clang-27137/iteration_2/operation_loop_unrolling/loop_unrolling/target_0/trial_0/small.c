#include <stdio.h>

int main() {
  short q;
  q = 0;
  int s = 1L;
  
  int iterations = 6 * (q - s);
  while (iterations > 0) {
    q -= 1;
    iterations--;
  }
  
  printf("checksum = %X\n", q);
  return 0;
}
