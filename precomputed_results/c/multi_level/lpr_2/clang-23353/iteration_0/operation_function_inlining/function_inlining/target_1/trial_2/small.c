#include <iostream>

// Original declarations

typedef char a;
typedef int b;
typedef unsigned c;

// Original function

a fn1(a p1, a p2) {
  return p1 * p2;
}

// Original struct
class g {
  public:
    signed h;
};

// Original variables

b i;
g j;

// Optimized program

int main() {
  c p1;   // Loop variable
  b* p2;  // Pointer variable
  a p3;   // Loop counter

  p3 = 6;
  while (p3 != -7) {
    j.h ^= p1 * p2 && 1L;
    p3--;
  }

  return 0;
}
