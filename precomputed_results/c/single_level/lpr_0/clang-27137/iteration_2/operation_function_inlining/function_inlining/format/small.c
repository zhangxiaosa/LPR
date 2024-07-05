#include <stdio.h>

short o;
char p;

char fn5() {
  short q;
  int i;
  short r = o;
  q = r;
  for (i = 0; i < 10; i++)
    while (q > 1)
      q -= 1;
  if (p = q)
    ;
}

int main() {
  int t = 0;
  fn5();
  printf("checksum = %X\n", p);
  return 0;
}