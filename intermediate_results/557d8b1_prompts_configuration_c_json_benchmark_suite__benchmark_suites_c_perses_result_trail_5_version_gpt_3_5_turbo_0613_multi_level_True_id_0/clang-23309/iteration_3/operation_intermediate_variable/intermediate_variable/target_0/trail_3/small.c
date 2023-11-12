#include <stdio.h>

long fn1(long p1, long p2) {
  return p1 - p2;
}

long f;
long g;
short a = 1;

int main() {
  int c;
  for (g = 3; g; g -= 1) {
    c = 250U; // Optimized: Replaced the if statement condition with c = 250U
    a || (c = g);
    short d = 0xBCD1;
    long delta = 1U - c; // Optimized: Constant folding
    if (fn1(d, delta) - 1 & 1) { // Optimized: Copy propagation
      f = 1;
    }
  }
  printf("checksum = %lu\n", f); // Optimized: Modified the format specifier
  return 0;
}