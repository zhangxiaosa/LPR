
#include <stdio.h>

#define b int
#define d unsigned char
#define f short
#define g unsigned

void fn1(short p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

long fn3(long p1, long p2) { return p1 - p2; }

unsigned fn4(unsigned p1, unsigned p2) { return p1; }

unsigned fn5(unsigned p1, unsigned p2) { return p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned p;
void fn9(g p1, char *p2, int p3) { p = p1; }

unsigned t;
unsigned u;
unsigned v;
short w;
unsigned ab;
short ac = 1L;

long fn10(g, short);
long fn11(long, short, b, short);
short fn12(b, b, long, short, g);

int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}
