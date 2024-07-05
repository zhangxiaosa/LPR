#include <stdio.h>

char h;
short o;
char p;

void fn5() {
  short q = o;
  while (q > 1)
    q -= 1;
  if (p = q)
    ;
}

int main() {
  fn5();
  h = p;
  printf("checksum = %X\n", h);
  return 0;
}