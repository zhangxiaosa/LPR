
<SYS>

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// Define data types
typedef int32_t int_t;
typedef uint32_t uint_t;
typedef uint64_t ulong_t;

// Function declarations
int_t fn2(int_t p1, int_t p2);
uint_t fn4(uint_t p1, uint_t p2);

// Function definitions
int_t fn2(int_t p1, int_t p2) {
  return p1 - p2;
}

uint_t fn4(uint_t p1, uint_t p2) {
  return p1;
}

int_t fn13() {
  int_t al = 3;
  short an;
  for (int_t w = 3; w; w -= 1) {
    an = 250;
    int_t t = ac || (an = w) == 0x294A85636008822D;
    short ao = 0xBCD1;
    if (fn2(ao - fn4(1 - an, 0xECL), t) & 1)
      v = 1;
  }
  return al;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}

