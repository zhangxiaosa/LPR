#include <stdio.h>

char fn2(char p1, char p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

unsigned w = 0xDC6F3D13L;
unsigned ap;
unsigned ao;

int main() {
  ao = 0;
  for (unsigned short ah = 0; ah <= 3; ah++) {
    unsigned assigned_value = ~(fn2(ap, 1L) != 0) + 0 && 0x57L;
    if (w) {
      ao = assigned_value;
    }
  }
  printf("checksum = %X\n", ao);
  return 0;
}