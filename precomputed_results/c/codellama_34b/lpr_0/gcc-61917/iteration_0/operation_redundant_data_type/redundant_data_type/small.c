
#include <stdio.h>

int fn2(int p1, int p2) { return p1 - p2; }

int k;
int l;
volatile int m[5][8];

int fn3(int p1) {
  int o = 0x4FL;
  for (;;) {
    for (l = 0; l < 20; l++) {
      for (k = 0; k >= -27; k = k - 6) {
        p1 = o - p1;
      }
    }
    p1 || m[2][5];
  }
}

int main() { return 0; }
