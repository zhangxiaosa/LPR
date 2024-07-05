#include <stdio.h>

int main() {
  int v_0_3;
  int d_temp = 2L;

  // Unrolled loop iterations (51 times)
  d_temp = (char)(v_0_3 = d_temp) + 0x9EE7F9D1C772505BLL;
  d_temp = (char)(v_0_3 = d_temp) + 0x9EE7F9D1C772505BLL;
  // ... repeat the line above 49 more times

  printf("checksum = %X\n", v_0_3);
  return 0;
}