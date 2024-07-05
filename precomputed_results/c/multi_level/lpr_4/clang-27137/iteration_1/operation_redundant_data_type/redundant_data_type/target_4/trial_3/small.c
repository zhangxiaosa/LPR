#include <stdio.h>

short loop_var; // New looping variable

int main() {
  short original_q; // Original data type of q
  int s = 1L;

  original_q = loop_var; // Initialize original_q with original value

  for (loop_var = 0; loop_var < 10; loop_var++)
    while (original_q > s)
      original_q -= 1;

  if (loop_var = original_q)
    ;

  loop_var = loop_var;
  printf("checksum = %X\n", loop_var);
  return 0;
}