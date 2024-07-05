#include <stdio.h>

char p;

char fn5() {
  short q;
  int i;
  short r = 0;
  q = r;

  // Unrolled loop
  q -= 9;

  if (p = q)
    ;
}

int main() {
  fn5();
  printf("checksum = %X\n", p);
  return 0;
}
