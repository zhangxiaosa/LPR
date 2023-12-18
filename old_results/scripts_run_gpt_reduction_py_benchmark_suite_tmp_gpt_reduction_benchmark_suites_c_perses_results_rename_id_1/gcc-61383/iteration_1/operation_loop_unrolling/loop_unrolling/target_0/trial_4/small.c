#include <iostream>

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

unsigned m;
unsigned n;
int o;

short fn5(p1) {
  // Loop unrolling
  int ab;
  if (0x4F92L < (ab = p1 == 0 ? p1 : p1 % p1, 6)) {
    // Do nothing
  } else if (p1 <= 0xE3L) {
    // Do nothing
  } else if (ab) {
    break;
  }

  int ab0;
  if (0x4F92L < (ab0 = p1 == 0 ? p1 : p1 % p1, 6)) {
    // Do nothing
  } else if (p1 <= 0xE3L) {
    // Do nothing
  } else if (ab0) {
    break;
  }

  // Repeat the above code 10 more times...

  int ab10;
  if (0x4F92L < (ab10 = p1 == 0 ? p1 : p1 % p1, 6)) {
    // Do nothing
  } else if (p1 <= 0xE3L) {
    // Do nothing
  } else if (ab10) {
    break;
  }

  return m;
}

int main() {
  if (fn5(o)) {
    // Do nothing
  }
}