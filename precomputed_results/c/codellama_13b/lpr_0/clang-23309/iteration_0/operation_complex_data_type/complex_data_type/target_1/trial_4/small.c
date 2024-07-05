
#include <stdio.h>

int main() {
  int p1 = 0;
  int p2 = 0;
  int p3 = 0;
  int p4 = 0;
  int p5 = 0;
  int p6 = 0;
  int p7 = 0;
  int p8 = 0;
  int p9 = 0;
  int p10 = 0;
  int p11 = 0;
  int p12 = 0;
  int v = 0;
  int p = 0;

  p1 = fn10(p1, p2);
  p3 = fn11(p3, p4, p5);
  p6 = fn12(p6, p7, p8, p9, p10);
  p11 = fn13(p11, p12);
  v = fn14(v, p11);
  p = fn9(v, "g_170", p);
  printf("checksum = %X\n", p);
  return 0;
}
