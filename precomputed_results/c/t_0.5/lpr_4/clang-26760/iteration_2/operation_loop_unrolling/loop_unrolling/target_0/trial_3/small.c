#include <iostream>

int g;

short fn1() {
  int j = 0x24F96B7B;
  unsigned k;
  
  for (; j; j -= 16) {
    // Loop body (unrolled)
  }
  
  return 0;
}

int main() {
  fn1();
  return 0;
}