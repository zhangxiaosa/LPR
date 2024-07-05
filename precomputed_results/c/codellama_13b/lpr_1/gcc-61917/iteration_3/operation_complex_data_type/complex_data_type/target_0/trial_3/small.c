
#include <stdio.h>

int fn3(int p1) {
  int k;
  int l;
  int m[5*8];

  for (l = 0; l < 5; l++) {
    for (k = 0; k < 8; k++) {
      m[l*8 + k] = p1 - k;
    }
  }
}

int main() {
  int p1 = 10;
  fn3(p1);
}
