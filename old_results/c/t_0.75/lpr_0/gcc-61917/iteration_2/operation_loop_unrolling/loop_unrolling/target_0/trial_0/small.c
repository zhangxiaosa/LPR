#include <stdio.h>

int k;
unsigned l;
volatile unsigned m25;

unsigned fn3(p1) {
  int o;
  for (;;) {
    for (; l >= 4; l -= 4) {
      // Loop body iteration 1
      // Loop body iteration 2
      // Loop body iteration 3
      // Loop body iteration 4
    }
    for (; l; l--) {
      // Loop body
    }
    p1 || m25;
  }
}

int main() {}
