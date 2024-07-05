#include <iostream>

unsigned g;

void fn2() {
  g = 0xC3L; // Replace with a constant value
}

int main() {
  fn2();
}