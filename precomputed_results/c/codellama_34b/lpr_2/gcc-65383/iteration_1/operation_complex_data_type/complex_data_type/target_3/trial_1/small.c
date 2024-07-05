
#include <stdint.h>

// Declare variables with primary data types
uint32_t g;
uint32_t q_real;

// Define function with primary data types
uint32_t fn2() {
  for (;;) {
    q_real = 0xC3;
    g = 0x92A1D2CD;
    if (g)
      return q_real;
  }
}

// Define main function with primary data types
int main() {
  q_real = fn2();
}
