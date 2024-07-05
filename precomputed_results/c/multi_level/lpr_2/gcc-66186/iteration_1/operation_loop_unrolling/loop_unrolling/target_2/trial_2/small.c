#include <iostream>

int h;

int main() {
  short ak[8];
  unsigned p2;
  unsigned short p3 = -7L;
  unsigned p4;

  if (h < 0) {
    if (ak[p3]) {
      // First unrolled iteration
      // do something
    }
    if (ak[p3 + 1]) {
      // Second unrolled iteration
      // do something
    }
    if (ak[p3 + 2]) {
      // Third unrolled iteration
      // do something
    }
    if (ak[p3 + 3]) {
      // Fourth unrolled iteration
      // do something
    }
    if (ak[p3 + 4]) {
      // Fifth unrolled iteration
      // do something
    }
    if (ak[p3 + 5]) {
      // Sixth unrolled iteration
      // do something
    }
    if (ak[p3 + 6]) {
      // Seventh unrolled iteration
      // do something
    }
    if (ak[p3 + 7]) {
      // Eighth unrolled iteration
      // do something
    }
  }
}