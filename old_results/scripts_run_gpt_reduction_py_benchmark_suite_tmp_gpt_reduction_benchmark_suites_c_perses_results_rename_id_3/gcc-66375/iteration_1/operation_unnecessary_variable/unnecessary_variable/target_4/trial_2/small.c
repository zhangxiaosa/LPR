#include <stdio.h>

char fn2(char p1) {
  return p1;
}

unsigned v_value;
int main() {
  int d = 2;
  unsigned e = 0x9EE7F9D1C772505BLL;

  int temp_u = 0;  // Optimized 'u' variable

  for (; temp_u < 51; ++temp_u)
    d = fn2(v_value = d) + 0x9EE7F9D1C772505BLL;

  unsigned u = static_cast<unsigned>(temp_u); // Restored 'u' variable

  printf("checksum = %x\n", v_value);
  return 0;
}