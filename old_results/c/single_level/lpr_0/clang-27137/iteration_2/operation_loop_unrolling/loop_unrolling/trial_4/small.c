#include <stdio.h>

char p;

char fn5() {
  short q;
  short r = o;
  q = r;

  // Loop unrolling
  while (q > 1) {
    q -= 10;
    q -= 10;
    q -= 10;
    q -= 10;
    q -= 10;
    q -= 10;
    q -= 10;
    q -= 10;
    q -= 10;
    q -= 10;
  }

  if (p = q)
    ;
}

int main() {
  fn5();
  printf("checksum = %X\n", p);
  return 0;
}