#include <iostream>

int h;

int fn5() {
  short ak[8];
  unsigned p2;
  unsigned short p3 = -7L;
  unsigned p4;

  // Unroll the outer loop
  // Iteration 0
  p2 = 0;
  for (p4 = 0; p4 <= 7; p4 += 1) {
    if (h < 0) {
      // Unroll the inner loop
      // Iteration 0
      for (p4 = 0; p4 <= 7; p4 += 1) {
        if (ak[p3])
          break;
      }
      // Iteration 1
      for (p4 = 0; p4 <= 7; p4 += 1) {
        if (ak[p3])
          break;
      }
      // Iteration 2
      for (p4 = 0; p4 <= 7; p4 += 1) {
        if (ak[p3])
          break;
      }
      // Iteration 3
      for (p4 = 0; p4 <= 7; p4 += 1) {
        if (ak[p3])
          break;
      }
    }
  }

  // Unroll the outer loop
  // Iteration 1
  p2 = 1;
  for (p4 = 0; p4 <= 7; p4 += 1) {
    if (h < 0) {
      // Unroll the inner loop
      // Iteration 0
      for (p4 = 0; p4 <= 7; p4 += 1) {
        if (ak[p3])
          break;
      }
      // Iteration 1
      for (p4 = 0; p4 <= 7; p4 += 1) {
        if (ak[p3])
          break;
      }
      // Iteration 2
      for (p4 = 0; p4 <= 7; p4 += 1) {
        if (ak[p3])
          break;
      }
      // Iteration 3
      for (p4 = 0; p4 <= 7; p4 += 1) {
        if (ak[p3])
          break;
      }
    }
  }

  // Repeat the unrolling process for iterations 2 to 7

  return 1L;
}

int main() {
  fn5();
}