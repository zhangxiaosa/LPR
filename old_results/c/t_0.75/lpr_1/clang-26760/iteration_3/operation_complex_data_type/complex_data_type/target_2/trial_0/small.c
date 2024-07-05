#include <stdio.h>

int g;
unsigned long long k;

int main() {
  int j = 0x24F96B7BL;
  unsigned long long k_temp = k;
  unsigned k_temp2;
  
  if (j)
    --j;
    
q:
  k_temp2 = k_temp >> 1UL;
  
  if (g) {
    k_temp2 = k_temp2 << j;
    goto q;
  }
  
  k = k_temp2;
}
