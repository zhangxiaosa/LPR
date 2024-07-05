
#include <stdio.h>

typedef unsigned char u_char;
typedef short s_short;

short fn1(short p1, int p2) { printf("checksum = %X\n", p1); }

// Optimized function for calculating p37
s_short fn2(short p1, s_short p2, s_short p3, s_short p4, s_short p5) {
  // Use more efficient data type for local variables
  s_short a = p1 + p2;
  s_short b = p3 + p4;
  s_short c = p5 + 1;

  // Use fewer operations and reduce the number of times each variable is accessed
  return (a + b) / c;
}

// Optimized function for calculating p37
s_short fn3(short p1, s_short p2, s_short p3, s_short p4, s_short p5) {
  // Use more efficient data type for local variables
  s_short a = p1 - p2;
  s_short b = p3 - p4;
  s_short c = p5 + 1;

  // Use fewer operations and reduce the number of times each variable is accessed
  return (a - b) / c;
}

int main() {
  int ap = 0;
  s_short p37 = fn2(p1, p2, p3, p4, p5);
  fn1(p37, ap);
  return 0;
}
