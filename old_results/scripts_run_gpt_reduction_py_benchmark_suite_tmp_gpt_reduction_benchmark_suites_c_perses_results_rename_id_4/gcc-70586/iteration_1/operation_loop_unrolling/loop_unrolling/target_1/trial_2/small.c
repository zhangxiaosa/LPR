#include <stdbool.h>

int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

int p;
short q;
unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t2;
static unsigned fn7(short);

unsigned fn7(short p1) {
  int ai;
  ai = fn3(p1, p);

  if (s) {
    int af;

    for (; p1; --p1)
      ;

    // Unrolling the loop
    // Iteration 1
    af = 0;
    // Loop body

    // Iteration 2
    af = 8;
    // Loop body

    // Iteration 3
    af = 16;
    // Loop body

    // Iteration 4
    af = 24;
    // Loop body

    // Iteration 5
    af = 32;
    // Loop body

    // Iteration 6
    af = 40;
    // Loop body

    // Repeat loop body for additional iterations
    // ...
    // ...
    // ...
  } else {
    t2 = fn3(fn3(p1, q), 0x9CFB623FL);
  }

  return p1;
}

int main() {
  if (fn7(1))
    ;
}
