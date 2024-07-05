#include <iostream>

int k;
unsigned l;
volatile unsigned m[40];
unsigned p1;
unsigned o;

int main() {
  unsigned remainingIterations = l % 3;
  unsigned unrolledIterations = l / 3;
  
  for (; unrolledIterations > 0; unrolledIterations--) {
    k = 0;
    for (; k >= -27; k -= 6)
      p1 = o - p1;
    
    k = 0;
    for (; k >= -27; k -= 6)
      p1 = o - p1;
    
    k = 0;
    for (; k >= -27; k -= 6)
      p1 = o - p1;
  }

  for (; remainingIterations > 0; remainingIterations--) {
    k = 0;
    for (; k >= -27; k -= 6)
      p1 = o - p1;
  }

  if (p1)
    m[2];
}
