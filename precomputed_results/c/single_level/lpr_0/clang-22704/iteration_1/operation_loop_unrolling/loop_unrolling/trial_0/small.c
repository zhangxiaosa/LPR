#include <stdio.h>

typedef char b;

struct c {
  int d;
  int e;
};

struct c f;

b fn1() {
  int h = 6L;

  if (f.e) {
    f.d = h;

    // Unrolled loop iteration 1
    if (f.e) {
      f.d = h;
    }

    // Unrolled loop iteration 2
    if (f.e) {
      f.d = h;
    }

    // Unrolled loop iteration 3
    if (f.e) {
      f.d = h;
    }

    // ...
    // Continue unrolling the loop
    
    return 0xEEACFBBFL;
  } else {
    // Unrolled loop iteration 1
    if (f.e) {
      f.d = h;
    }

    // Unrolled loop iteration 2
    if (f.e) {
      f.d = h;
    }

    // Unrolled loop iteration 3
    if (f.e) {
      f.d = h;
    }

    // ...
    // Continue unrolling the loop
    
    return 0xEEACFBBFL;
  }
}

int main() {
  // There are no statements inside main
  // It can be left empty
  return 0;
}
