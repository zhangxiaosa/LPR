#include <stdio.h>

char fn2(char p1) {
  return p1;
}

unsigned v_value;
unsigned u;

int main() {
  int d = 2;

  // Unrolled loop - 4 iterations
  d = fn2(v_value = d) + 0x9EE7F9D1C772505BLL;
  ++u;
  d = fn2(v_value = d) + 0x9EE7F9D1C772505BLL;
  ++u;
  d = fn2(v_value = d) + 0x9EE7F9D1C772505BLL;
  ++u;
  d = fn2(v_value = d) + 0x9EE7F9D1C772505BLL;
  ++u;

  printf("checksum = %x\n", v_value);
  return 0;
}