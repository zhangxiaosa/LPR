
#include <stdio.h>

// Function declarations
unsigned fn3(unsigned p1, unsigned p2);
unsigned fn6(unsigned p1, unsigned p2);

int main() {
  unsigned p = 0;
  unsigned v = 0;
  short w = 3;
  short an = 0;
  short ao = 0;

  // Call function fn12 with parameters 7L, 7L, 248L, 0
  fn12(7L, 7L, 248L, 0);

  // Compute the checksum and store it in p
  p = v;

  // Print the checksum
  printf("checksum = %X\n", p);

  return 0;
}

short fn12(int p1, int p2, long p3, short p4) {
  an = 250L;
  if (p2 || (an = w)) {
    ao = 48873;
    if (fn3(ao, fn6(1L, an)) - p2 & 1L)
      v = 1L;
  }
  w--;
  return 0;
}

unsigned fn3(unsigned p1, unsigned p2) {
  return p1 - p2;
}

unsigned fn6(unsigned p1, unsigned p2) {
  return p2 - p1;
}
