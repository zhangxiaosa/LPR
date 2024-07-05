#include <stdio.h>

char fn2(int p1, int p2) {
  return p1;
}

int u;
int v3;

int main() {
  int checksum = 2;
  
  for (; u < 51; ++u) {
    v3 = 2; // Constant propagation: replace checksum with its initial value (2)
    
    v3 = fn2(v3, 3);
  
    v3 = v3 + 0x9EE7F9D1C772505B; // This line can't be optimized further since the value is not a compile-time constant
  }
  
  printf("checksum = %d\n", v3); // Copy propagation: replace checksum with v3
  
  return 0;
}
