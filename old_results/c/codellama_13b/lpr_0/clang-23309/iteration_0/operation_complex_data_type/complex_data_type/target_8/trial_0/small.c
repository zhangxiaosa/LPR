c
#include <stdio.h>

int fn2(int p1, int p2) {
  return p1 - p2;
}

int fn3(int p1, int p2) {
  return p1 + p2;
}

int fn4(int p1, int p2) {
  return p1 * p2;
}

int fn5(int p1, int p2) {
  return p1 / p2;
}

int fn6(int p1, int p2) {
  return p1 % p2;
}

int fn7(int p1, int p2) {
  return p1 && p2;
}

int fn8(int p1, int p2) {
  return p1 || p2;
}

int fn9(int p1, int p2) {
  return p1 > p2;
}

int fn10(int p1, int p2) {
  return p1 < p2;
}

int fn11(int p1, int p2) {
  return p1 == p2;
}

int fn12(int p1, int p2) {
  return p1 != p2;
}

int fn13(int p1, int p2) {
  return p1 & p2;
}

int fn14(int p1, int p2) {
  return p1 | p2;
}

int fn15(int p1, int p2) {
  return p1 ^ p2;
}

int fn16(int p1, int p2) {
  return p1 << p2;
}

int fn17(int p1, int p2) {
  return p1 >> p2;
}

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
  int p13 = 0;
  int p14 = 0;
  int p15 = 0;
  int p16 = 0;
  int p17 = 0;

  p1 = fn2(fn3(fn4(fn5(fn6(fn7(fn8(fn9(fn10(fn11(fn12(fn13(fn14(fn15(fn16(fn17(p1, p2), p3), p4), p5), p6), p7), p8), p9), p10), p11), p12), p13), p14), p15), p16), p17);

  printf("checksum = %X\n", p);

  return 0;
}
