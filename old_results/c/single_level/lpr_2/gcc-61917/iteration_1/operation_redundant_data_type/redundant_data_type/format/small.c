#include <stdint.h>

short fn1(short p1, short p2) { return p1 - p2; }
int k;
unsigned l;
volatile unsigned m[5][8];
unsigned fn3(unsigned p1) {
  for (;;) {
    for (; l; l++)
      for (k = 0; k >= -27; k = fn1(k, 6))
        p1 = 0x4F - p1;
    p1 || m[2][5];
  }
}

int main() { }