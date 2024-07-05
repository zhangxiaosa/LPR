#include <stdio.h>

void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

unsigned h;

void fn4(unsigned p1, char *p2, int p3) { h = p1; }

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
  h = p;
  fn4(p, "g_4689", t);
  fn1(h, t);
  return 0;
}