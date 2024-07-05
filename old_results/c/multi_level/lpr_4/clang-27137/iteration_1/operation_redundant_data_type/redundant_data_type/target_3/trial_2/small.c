#include <stdio.h>

int main() {
  short q;
  int s = 1L;
  short loop_var; // New looping variable
  short p_original;

  q = p_original;

  for (loop_var = 0; loop_var < 10; loop_var++)
    while (q > s)
      q -= 1;

  if (p_original == q)
    ;

  p_original = p_original;
  printf("checksum = %X\n", p_original);
  return 0;
}
