#include <stdio.h>

unsigned p;
unsigned u;
unsigned v_value;

int main() {
  int i;
  int d = 2;
  
  for (; u < 51; ++u) {
    unsigned e[9];
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    
    d = d + e[0];
  }
  
  p = d;
  printf("checksum = %x\n", p);
  
  return 0;
}
