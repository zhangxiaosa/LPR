#include <stdio.h>

int h;

int main() {
  unsigned p2;
  unsigned p3 = -7L;
  unsigned p4;
  short ak[8];

  // Unrolled loop
  // Iteration 0
  p2 = 0;
  for (p4 = 0; p4 <= 7; p4 += 2) {
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 2) {
        if (ak[(unsigned short)p3]) {
          break;
        }
      }
    }
  }

  // Iteration 1
  p2 = 1;
  for (p4 = 0; p4 <= 7; p4 += 2) {
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 2) {
        if (ak[(unsigned short)p3]) {
          break;
        }
      }
    }
  }

  // Iteration 2
  p2 = 2;
  for (p4 = 0; p4 <= 7; p4 += 2) {
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 2) {
        if (ak[(unsigned short)p3]) {
          break;
        }
      }
    }
  }

  // Iteration 3
  p2 = 3;
  for (p4 = 0; p4 <= 7; p4 += 2) {
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 2) {
        if (ak[(unsigned short)p3]) {
          break;
        }
      }
    }
  }

  // Iteration 4
  p2 = 4;
  for (p4 = 0; p4 <= 7; p4 += 2) {
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 2) {
        if (ak[(unsigned short)p3]) {
          break;
        }
      }
    }
  }

  // Iteration 5
  p2 = 5;
  for (p4 = 0; p4 <= 7; p4 += 2) {
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 2) {
        if (ak[(unsigned short)p3]) {
          break;
        }
      }
    }
  }

  // Iteration 6
  p2 = 6;
  for (p4 = 0; p4 <= 7; p4 += 2) {
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 2) {
        if (ak[(unsigned short)p3]) {
          break;
        }
      }
    }
  }

  // Iteration 7
  p2 = 7;
  for (p4 = 0; p4 <= 7; p4 += 2) {
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 2) {
        if (ak[(unsigned short)p3]) {
          break;
        }
      }
    }
  }

  return 0;
}