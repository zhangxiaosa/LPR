#include<stdio.h>

char p;
short q;
int i;
short r = 0;

char fn5() {
  q = r;
  for (i = 0; i < 10; i++)
    while (q > 1)
      q -= 1;
  if (p = q)
    ;
}

int main() {
  fn5();
  printf("checksum = %X\n", p);
  return 0;
}