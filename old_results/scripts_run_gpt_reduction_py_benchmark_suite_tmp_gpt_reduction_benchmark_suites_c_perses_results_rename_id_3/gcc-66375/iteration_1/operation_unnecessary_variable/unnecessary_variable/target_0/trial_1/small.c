#include <stdio.h>

char fn2(char p1) {
  return p1;
}

unsigned v_value;
unsigned u;

int main() {
  unsigned e = 0x9EE7F9D1C772505BLL;
  v_value = 2;
  printf("checksum = %x\n", v_value + e);
  return 0;
}