#include <stdio.h>

char p;

char fn5() {
  short q;
  int i;
  short r = o;
  q = r;

  if (q > 10)
    q -= 10;
  if (q > 9)
    q -= 9;
  if (q > 8)
    q -= 8;
  if (q > 7)
    q -= 7;
  if (q > 6)
    q -= 6;
  if (q > 5)
    q -= 5;
  if (q > 4)
    q -= 4;
  if (q > 3)
    q -= 3;
  if (q > 2)
    q -= 2;
  if (q > 1)
    q -= 1;

  if (p = q)
    ;
}

int main() {
  fn5();
  printf("checksum = %X\n", p);
  return 0;
}