
#include <stdio.h>

int fn2(int p1, short p2) { return p1 - p2; }
short fn5(short p1, short p2) { return p2; }
short fn6(unsigned p1, short p2) { return p2; }
short p;
void fn9(int p1, char* p2, int p3) { p = p1; }
unsigned t;
short u;
long v;
short w;
short ab;
short ac = 1;
unsigned fn10(int, short);
int fn13() {
  int ae = 1;
  fn10(u, t);
  return ae;
}
unsigned fn10(int p1, short p2) {
  long am = 1;
  int an;
  an = 250;
  p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
  short ao = 0xBCD1;
  if (fn2(ao - (fn6(am, an) & 1) << 8, p2) & 1)
    v = 1;
  return 3;
}
int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}
