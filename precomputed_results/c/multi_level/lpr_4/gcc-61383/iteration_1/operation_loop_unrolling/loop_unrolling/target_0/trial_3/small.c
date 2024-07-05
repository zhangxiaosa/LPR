#include <stdio.h>

int fn1(int p1, int p2) {
  return p2 == 0 ? p1 : p1 % p2;
}

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

unsigned m;
unsigned n;
int o;

short fn6() {
  int ab;

  // Unrolled loop iterations
  if (n < 12) {
    // Iteration 1
    if (0x4F92L < (ab = fn1(o, o), 6)) {
      ;
    } else if (o <= 0xE3L) {
      ;
    } else if (ab) {
      return m;
    }

    // Iteration 2
    if (0x4F92L < (ab = fn1(n, n), 6)) {
      ;
    } else if (n <= 0xE3L) {
      ;
    } else if (ab) {
      return m;
    }

    // Iteration 3
    // ... continue unrolling the loop up to iteration 12

    // After 12 iterations
    if (0x4F92L < (ab = fn1(n, n), 6)) {
      ;
    } else if (n <= 0xE3L) {
      ;
    } else if (ab) {
      return m;
    }
  }

  return m;
}

int main() {
  fn6();
  return 0;
}