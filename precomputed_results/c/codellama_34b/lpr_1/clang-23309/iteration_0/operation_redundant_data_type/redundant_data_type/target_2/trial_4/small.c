
#include <stdio.h>

void fn1(f p1, int p2) {
  printf("checksum = %X\n", p1);
}

int fn2(b p1, b p2) {
  return p1 - p2;
}

int fn3(c p1, c p2) {
  return p1 - p2;
}

unsigned char fn4(unsigned char p1, unsigned char p2) {
  return p1;
}

int fn5(f p1, f p2) {
  return p2;
}

int fn6(f p1, f p2) {
  return fabs(p1 - p2);
}

void fn9(g p1, char *p2, int p3) {
  p = p1;
}

int fn10(g p1, e p2) {
  return p1;
}

int fn11(d p1, f p2, b p3, e p4) {
  return p2;
}

int fn12(b p1, b p2, d p3, a p4, g p5) {
  return fn13(g, e);
}

int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}
