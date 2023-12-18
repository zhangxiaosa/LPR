#include <stdio.h>

short o;
char p;

int main() {
  int i;
  short r = o;

  for (i = 0; i < 10; i++)
    while (r > 1L)
      r -= 1;

  if (p = r)
    ;

  printf("checksum = %X\n", p);

  return 0;
}