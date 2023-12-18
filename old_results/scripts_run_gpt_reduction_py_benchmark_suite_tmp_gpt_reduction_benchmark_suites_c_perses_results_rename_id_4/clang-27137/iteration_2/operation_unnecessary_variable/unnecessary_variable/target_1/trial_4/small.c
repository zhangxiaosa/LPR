#include <stdio.h>

int main() {
  long q;
  for (loop_var = 0; loop_var < 10; loop_var++)
    while (q > 1L)
      q -= 1;

  printf("checksum = %lX\n", q);
  return 0;
}
