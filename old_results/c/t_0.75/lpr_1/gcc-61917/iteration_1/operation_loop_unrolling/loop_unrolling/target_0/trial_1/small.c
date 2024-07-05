#include <iostream>

int k;
unsigned l;
volatile unsigned m[5][8];
unsigned p1;
unsigned o;

int main() {
  // Loop unrolling
  k = 0;
  p1 = o - p1;
  k = k - 6;
  p1 = o - p1;
  k = k - 6;
  p1 = o - p1;
  k = k - 6;
  p1 = o - p1;
  k = k - 6;
  p1 = o - p1;
  k = k - 6;
  p1 = o - p1;
  k = k - 6;
  p1 = o - p1;

  // Check condition and access array element
  if (p1)
    m[2][5];
}