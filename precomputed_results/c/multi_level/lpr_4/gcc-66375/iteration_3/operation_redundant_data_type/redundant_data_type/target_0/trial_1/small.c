#include <stdio.h>

int main() {
  long v_0_3;
  long d_temp = 2L;
  long temp_u = 0;
  for (; temp_u < 51; ++temp_u)
    d_temp = (char)(v_0_3 = d_temp) + 0x9EE7F9D1C772505BLL;
  printf("checksum = %lX\n", v_0_3);
  return 0;
}
