#include <stdio.h>

typedef char a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;

void fn1(d p1, int p2) { printf("checksum = %X\n", p1); }

d h;

void fn4(e p1, char *p2, int p3) { h = p1; }

b o;
a p;

int main() {
  int t = 0;

  // Inlined body of fn5
  {
    for (int i = 0; i < 10; i++)
      while (o > 1L)
        o -= 1;
    if (p = o)
      ;
  }

  h = p;
  fn1(h, t);
  return 0;
}