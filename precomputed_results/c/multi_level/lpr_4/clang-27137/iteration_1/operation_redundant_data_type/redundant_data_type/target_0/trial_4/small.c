#include<stdio.h>

unsigned int h;
short int o;
char p;
int main() {
  short int q;
  int i;
  q = o;
  int s = 1;
  for (i = 0; i < 10; i++)
    while (q > s)
      q -= 1;
  if (p == q)
    ;
  h = (unsigned int)p;
  printf("checksum = %X\n", h);
  return 0;
}