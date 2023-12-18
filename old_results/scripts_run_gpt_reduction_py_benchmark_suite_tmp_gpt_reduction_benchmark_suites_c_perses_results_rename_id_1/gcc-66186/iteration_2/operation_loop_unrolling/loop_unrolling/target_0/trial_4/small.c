#include <iostream>

int h;

int main() {
  unsigned p2;
  unsigned p3 = -7L;
  unsigned p4;
  short ak[8];

  // Unrolled loop iteration 0
  p2 = 0;
  // Loop body for the first unrolled iteration
  for (p4 = 0; p4 <= 7; p4 += 2) {
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 2) {
        if (ak[(unsigned short)p3]) {
          break;
        }
      }
    }
  }
  // End of unrolled loop iteration 0

  // Unrolled loop iteration 1
  p2 = 1;
  // Loop body for the second unrolled iteration
  for (p4 = 0; p4 <= 7; p4 += 2) {
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 2) {
        if (ak[(unsigned short)p3]) {
          break;
        }
      }
    }
  }
  // End of unrolled loop iteration 1

  // Unrolled loop iteration 2
  p2 = 2;
  // Repeat the unrolling process for iterations 2 to 7

  // Unrolled loop iteration 7
  p2 = 7;
  // Loop body for the eighth unrolled iteration
  for (p4 = 0; p4 <= 7; p4 += 2) {
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 2) {
        if (ak[(unsigned short)p3]) {
          break;
        }
      }
    }
  }
  // End of unrolled loop iteration 7

  return 0;
}
