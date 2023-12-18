#include <stdio.h>

int main() {
  int loop_var_int;
  long loop_var_long;

  loop_var_long = loop_var_int;

  for (loop_var_int = 0; loop_var_int < 10; loop_var_int++) {
    while (loop_var_long > 1L) {
      loop_var_long -= 1;
    }
  }

  printf("checksum = %lX\n", loop_var_long);

  return 0;
}
