#include <stdio.h>

unsigned fn2(p1) {
  return p1;
}

unsigned v_value;
unsigned u;

int main() {
  int d = 2;
  for (; u < 51U; ++u)
    d = fn2(v_value = d) + 0x9EE7F9D1C772505BU;
  printf("checksum = %u\n", v_value);
  return 0;
}