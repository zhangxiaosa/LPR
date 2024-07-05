#include <stdio.h>

int k; // Primary data type: int
unsigned int l; // Primary data type: unsigned int
volatile unsigned int m[5][8]; // Primary data type: volatile unsigned int
unsigned int fn3(unsigned int p1) {
  int o; // Primary data type: int

  for (;;) {
    for (; l; l++) {
      for (k = 0; k >= -27; k -= 6) {
        p1 = o - p1; // Primary data types: int, int, unsigned int
      }
    }
    if (p1) {
      m[2][5]; // Primary data type: volatile unsigned int
    }
  }
}

int main() {
}
