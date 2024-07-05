#include <stdio.h>

short fn3(short p1, short p2) { return p2; }

unsigned v_value;
unsigned u;

int main() {
  int d = 2;
  unsigned e = 0x9EE7F9D1C772505BLL;
  
  for (; u < 51; ++u)
    d = (v_value = fn3(4, d)) + e;
  
  printf("checksum = %x\n", v_value);
  return 0;
}