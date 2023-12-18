#include <stdbool.h>

int k, o;
unsigned l;
volatile unsigned m[5][8];

int fn3(int p1) {
  while (1) {
    // Unrolled loop
    k = 0;
    p1 = o - p1;
    k = -6;
    p1 = o - p1;
    k = -12;
    p1 = o - p1;
    k = -18;
    p1 = o - p1;
    k = -24;
    p1 = o - p1;

    // Check condition
    if (p1 || m[2][5]) {
      // Do something
    }
  }
}

int main() {
  fn3(0);
  return 0;
}