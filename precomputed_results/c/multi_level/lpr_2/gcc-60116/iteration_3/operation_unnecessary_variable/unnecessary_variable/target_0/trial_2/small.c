#include <stdio.h>

char q;
unsigned ap;

int main() {
  for (int ah = 0; ah <= 3; ah += 1) {
    unsigned assigned_value = ~(ap) && 0x57L;  // Simplified expression
    if (1) {
      q = 0x41AEA787L;
    } else {
      q = assigned_value;
    }
  }
  printf("checksum = %X\n", q);
  return 0;
}