
#include <stdio.h>

int fn2(int p1, short p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }
unsigned char fn5(unsigned char p1, unsigned char p2) { return p2; }
unsigned char fn6(unsigned char p1, unsigned char p2) { return p1 - p2; }

void fn9(unsigned char p1, char *p2, int p3) {
  // Decomposed variables
  unsigned char p1_decomp = p1;
  char *p2_decomp = p2;
  int p3_decomp = p3;

  // Optimized variable
  unsigned char p3_opt = p3_decomp;

  // Function calls
  fn4(p1_decomp, p2_decomp);
  fn5(p1_decomp, p2_decomp);
  fn6(p1_decomp, p2_decomp);
}

int main() {
  int ap = 0;
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}
