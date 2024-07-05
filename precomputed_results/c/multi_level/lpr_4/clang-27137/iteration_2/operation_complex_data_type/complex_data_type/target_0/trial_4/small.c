#include <stdio.h>

int main() {
  unsigned int q;
  for (int loop_var = 0; loop_var < 10; loop_var++) {
    q = loop_var;
    while (q > 1U)
      q -= 1U;
  }
  printf("checksum = %X\n", q);
  return 0;
}