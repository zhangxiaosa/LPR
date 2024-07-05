
#include <stdio.h>

// Function declarations
void fn1(unsigned, int);
int fn2(int, int);
unsigned char fn4(unsigned, unsigned);
int fn5(int, int);
int fn6(int, int);

int main() {
  int ap = 0;
  unsigned char ac = 1L;
  int p = 0;

  // Call fn13()
  fn13(p, ap);

  // Print the result
  printf("checksum = %X\n", p);

  return 0;
}

// Function definitions
void fn1(unsigned p1, int p2) {
  printf("checksum = %X\n", p1);
}

int fn2(int p1, int p2) {
  return p1 - p2;
}

unsigned char fn4(unsigned p1, unsigned p2) {
  return p1;
}

int fn5(int p1, int p2) {
  return p2;
}

int fn6(int p1, int p2) {
  return p1 - p2;
}

int fn13(int p, int ap) {
  int al = 3L;
  long am = 1L;
  short an = 250UL;
  short ao = 0xBCD1L;

  // Compute the checksum
  p = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
  if (fn2(ao - fn4(fn6(am, an), 0xECL), p) & 1UL)
    v = 1UL;

  return al;
}
