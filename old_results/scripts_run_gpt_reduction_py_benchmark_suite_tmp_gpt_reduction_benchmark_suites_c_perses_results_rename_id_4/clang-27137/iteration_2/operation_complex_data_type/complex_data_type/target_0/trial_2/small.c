#include <stdio.h>

int main() {
  long q;
  long loop_var;
  q = loop_var;
  for (loop_var = 0; loop_var < 10; loop_var++)
    while (q > 1L)
      q -= 1;
  printf("checksum = %lX\n", q);
  return 0;
}