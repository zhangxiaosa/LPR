
#include <stdio.h>
#include <stdlib.h>

// Function declarations
void fn1(unsigned p1);
int fn2(int p1, int p2);
unsigned char fn4(unsigned p1, unsigned p2);
int fn5(int p1, int p2);
int fn6(int p1, int p2);
int fn13();

int main() {
  // Initialize variables
  int p;
  int t;
  long v;
  short w;
  int ab;
  short ac = 1L;

  // Call fn13 to compute v
  v = fn13();

  // Print checksum
  printf("checksum = %X\n", v);

  // Return 0
  return 0;
}

// Function definitions
void fn1(unsigned p1) {
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

int fn13() {
  // Initialize variables
  int al = 3L;
  long am = 1L;
  short an;
  short ao;

  // Compute t
  t = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;

  // Compute ao
  ao = 0xBCD1L;

  // Compute v
  v = fn2(ao - fn4(fn6(am, an), 0xECL), t) & 1UL;

  // Return v
  return v;
}
