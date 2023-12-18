#include <stdio.h>

int main() {
  int loop_var = 0;
  long q = 0;

  q = (long)loop_var;
  for (loop_var = 0; loop_var < 10; loop_var++) {
    while (q > 1L)
      q = (long)(q - 1);
  }

  printf("checksum = %lx\n", q);
  return 0;
}
