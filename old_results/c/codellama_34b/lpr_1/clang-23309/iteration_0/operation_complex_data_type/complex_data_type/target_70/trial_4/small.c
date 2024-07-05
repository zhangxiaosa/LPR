
#include <stdio.h>

typedef unsigned char u_char;

void fn1(short p1, int p2) { printf("checksum = %X\n", p1); }

short fn10(short p1, short p2) { return p2 + (p1 - p2) * 256L; }

short fn11(u_char p1, short p2, short p3, short p4) { return p1 + (p2 - p3) * 256L; }

short fn12_inlined(short p1, short p2, u_char p3, short p4) { return p1 + (p2 - p3) * 256L; }

short fn13() {
  short ae = 1UL;
  fn10(u, t);
  return ae;
}

int main() {
  short ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}
