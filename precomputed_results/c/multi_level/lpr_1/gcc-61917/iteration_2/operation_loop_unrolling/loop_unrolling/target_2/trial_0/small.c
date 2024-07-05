#include <stdio.h>

int k;
int l;
volatile int m_flat[40];

int fn3(p1) {
  for (;;) {
    for (; l; l++) {
      k = 0;
      p1 = 24 - p1;  // First iteration
      k -= 6;
      p1 = 24 - p1;  // Second iteration
      k -= 6;
      p1 = 24 - p1;  // Third iteration
      // ...
    }
    if (p1)
      m_flat[2];
  }
}

int main() {}
