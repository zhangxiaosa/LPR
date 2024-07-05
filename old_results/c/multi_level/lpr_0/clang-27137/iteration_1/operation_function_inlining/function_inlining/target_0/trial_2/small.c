#include <stdio.h>

char p;
short q;
int i;
int main() {
  short r = 0;
  q = r;
  int s = 1L;
  for (i = 0; i < 10; i++) {
    while (q > s) {
      q -= 1;
    }
  }
  if (p = q)
    ;
  printf("checksum = %X\n", p);
  return 0;
}