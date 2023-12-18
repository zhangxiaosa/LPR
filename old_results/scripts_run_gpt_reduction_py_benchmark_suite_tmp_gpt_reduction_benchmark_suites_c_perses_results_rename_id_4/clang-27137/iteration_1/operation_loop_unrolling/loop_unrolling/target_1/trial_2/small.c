#include <stdio.h>

unsigned h;
short o;
char p;

int main() {
  short q;
  int i;

  q = o;
  int s = 1L;

  for (i = 0; i < 10 / 2; i++) {
    while (q > s) {
      q -= 1;
    }
    while (q > s) {
      q -= 1;
    }
  }

  p = q;
  h = p;

  printf("checksum = %u\n", h);

  return 0;
}