#include <stdio.h>

int main() {
  long f;
  short g;
  short a = 1;
  
  for (g = 3; g; g -= 1) {
    unsigned long c = 250UL;
    
    if (c == 250UL) {
      a || (c = g);
      
      short d = 0xBCD1;
      if ((d + 248UL) - a & 1)
        f = (d + 248UL) - a & 1;
    }
  }
  
  unsigned e = f;
  printf("checksum = %X\n", e);
  
  return 0;
}