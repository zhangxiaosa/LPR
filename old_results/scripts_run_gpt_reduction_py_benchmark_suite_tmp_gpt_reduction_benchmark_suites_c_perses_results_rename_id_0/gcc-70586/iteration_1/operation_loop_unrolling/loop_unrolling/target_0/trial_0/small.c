#include <stdio.h>

int fn2(int p1, unsigned p2) { return p1; }

int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

unsigned fn5(unsigned p1, unsigned p2) { return p1 + p2; }

int o;
int p;
short q;
static unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t2;

static unsigned fn7(short);

unsigned fn7(short p1) {
  int ac;
  ac = fn3(p1, o);
  if (s) {
    int ad;
    unsigned af;
    for (; p1 >= 4; p1 -= 4) {
      // Unrolled iterations 1-4
      // Loop body replicated here

      // Unrolled iteration 1
      // Loop body replicated here

      // Unrolled iteration 2
      // Loop body replicated here

      // Unrolled iteration 3
      // Loop body replicated here

      // Unrolled iteration 4
      // Loop body replicated here
    }

    // Remaining iterations (if any)
    for (; p1; --p1) {
      // Loop body replicated here
    }
  } else {
    unsigned aj[3];
    t2 = fn3(aj[1], q);
  }
  return p1;
}

int main() {
  if (fn7(1))
    ;
}