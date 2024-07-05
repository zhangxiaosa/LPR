#include <stdio.h>

typedef int MyType;

char p;

MyType fn5() {
  short q;
  int i;
  short r = 0;
  q = r;
  for (i = 0; i < 10; i++)
    while (q > 1)
      q -= 1;
  if (p == q)
    ;
}

int main() {
  fn5();
  printf("checksum = %X\n", p);
  return 0;
}