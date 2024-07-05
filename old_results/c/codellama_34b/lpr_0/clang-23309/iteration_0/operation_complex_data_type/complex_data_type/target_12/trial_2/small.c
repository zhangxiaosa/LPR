
#include <stdio.h>

int fn2(int p1, int p2) { return p1 - p2; }
int fn3(int p1, int p2) { return p1 - p2; }
int fn4(int p1) { return p1; }
int fn5(int p1, int p2) { return p2; }
int fn6(int p1, int p2) { return p2 - p1; }
int fn9(int p1) { return p1; }
int fn10(int p1) { return p1; }
int fn11(int p1) { return p1; }
int fn12(int p1) { return p1; }

int main() {
  int ap = 0;
  int v = fn13();
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", v);
  return 0;
}
