#include <stdio.h>

char h;
short o;
char p;

char fn5()
{
  short q;
  short r = o;
  q = r;
  int s = 1L;

  while (q > s)
    q -= 1;

  while (q > s)
    q -= 1;

  while (q > s)
    q -= 1;

  while (q > s)
    q -= 1;

  while (q > s)
    q -= 1;

  while (q > s)
    q -= 1;

  if (p == q)
    ;

  return 'a';
}

void fn2(char p1)
{
  h = p1;
}

int main()
{
  fn5();
  fn2(p);
  printf("checksum = %X\n", h);
  return 0;
}