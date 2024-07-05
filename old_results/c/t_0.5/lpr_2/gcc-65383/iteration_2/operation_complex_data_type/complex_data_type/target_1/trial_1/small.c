#include <stdio.h>

unsigned g;
unsigned h2 = 0x92A1D2CD;

int fn2() {
  for (;;) {
    unsigned r_dim1 = 5;
    unsigned r_dim2 = 9;
    unsigned r_dim3 = 5;
    unsigned r_flattened[r_dim1 * r_dim2 * r_dim3];
    
    if (h2)
      return 0xC3L;
      
    g = r_flattened[0x06D7 * r_dim2 * r_dim3 + 0x06D7 * r_dim3 + 0x06D7];
  }
}

int main() {
  fn2();
}