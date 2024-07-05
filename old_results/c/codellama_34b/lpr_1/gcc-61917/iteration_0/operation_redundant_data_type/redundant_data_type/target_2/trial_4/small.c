
#include <stdio.h>

int fn2(unsigned int p1, unsigned int p2) { return p1 - p2; }

unsigned int k;
unsigned int l;
volatile unsigned int m[5][8];

unsigned int fn3(unsigned int p1) {
  unsigned int o = 0x4FL;
  for (;;) {
    for (l = 0; l < 20; l++)
      for (k = 0; k >= -27; k = k - 6)
        p1 = fn2(o, p1);
    p1 || m[2][5];
  }
}

int main() {
  unsigned int p1 = 0;
  fn3(p1);
  return 0;
}
