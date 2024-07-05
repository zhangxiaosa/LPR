
#include <stdio.h>
#include <stdlib.h>

int fn2(int p1, int p2) {
  return p1 - p2;
}

int fn5(int p1, int p2) {
  return p2;
}

int fn6(unsigned p1, int p2) {
  return p2;
}

int p;

void fn9(unsigned p1, char *p2, int p3) {
  p = p1;
}

unsigned t;
int u;
unsigned v;
unsigned w;
int ac = 1;

unsigned fn10(int, int);

int fn13() {
  unsigned ae = 1;
  fn10(u, t);
  return ae;
}

unsigned fn10(int p1, int p2) {
  unsigned am = 1;
  unsigned an;
  an = 250;
  p2 = fn5(w, ac) || (an = p) == 0x294A85636008822D;
  unsigned ao = 0xBCD1;
  if (fn2(ao - (fn6(am, an) & 1) << 8, p2) & 1)
    v = 1;
  return 3;
}

int main() {
  unsigned ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}
