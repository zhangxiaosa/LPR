
#include <stdio.h>

int k = 0;
unsigned l = 0;
volatile unsigned m[5][8] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};

int fn3(int p1) {
  int o = 0;
  for (;;) {
    for (; l; l--) {
      for (k = 0; k >= -27; k -= 6) {
        p1 = o - p1;
      }
    }
    p1 || m[2][5];
  }
  return p1;
}

int main() {
  int p1 = 0;
  fn3(p1);
  return 0;
}
