#include <iostream>

unsigned r;
static signed s = -5L;

int main() {
  signed ae;
  ae = 1; // Simplified from ae = ad.o;
  r = 4 % 0; // Undefined behavior, division by zero
}