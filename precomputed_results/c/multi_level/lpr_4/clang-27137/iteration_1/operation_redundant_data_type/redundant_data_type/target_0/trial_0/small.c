#include <stdio.h>

short o;
char p;

int main() {
  short q;

  q = (short)o;

  for (short i = 0; i < 10; i++) {
    while (q > (short)1L) {
      q -= 1;
    }
  }

  if (p = (char)q) {
    ;
  }

  printf("checksum = %hX\n", (short)p);
}