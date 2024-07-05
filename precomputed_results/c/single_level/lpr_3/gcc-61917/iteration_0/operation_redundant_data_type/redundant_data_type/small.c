#include <stdbool.h>

int fn1(int p1, int p2) { return p1 - p2; }

unsigned int fn2(unsigned int p1, unsigned int p2) { return p1 - p2; }

int k;
unsigned int l;
volatile unsigned int m[5][8];

unsigned int fn3(unsigned int p1) {
  int o = 0x4F;
  for (;;) {
    for (l = 0; l < 20; l++)
      for (k = 0; k >= -27; k = fn1(k, 6))
        p1 = fn2(o, p1);
    p1 || m[2][5];
  }
}

int main() { return 0; }