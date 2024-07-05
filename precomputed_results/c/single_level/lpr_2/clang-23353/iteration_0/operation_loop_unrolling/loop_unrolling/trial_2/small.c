#include <iostream>

typedef char a;
typedef int b;
a fn1(a p1, a p2) { return p1 * p2; }

struct g {
  signed h;
};

b i;
struct g j;

int main() {
  a p3;

  // First iteration
  p3 = 6;
  j.h ^= fn1(p3, i) && 1L;

  // Second iteration
  p3 = 5;
  j.h ^= fn1(p3, i) && 1L;

  // Third iteration
  p3 = 4;
  j.h ^= fn1(p3, i) && 1L;

  // Fourth iteration
  p3 = 3;
  j.h ^= fn1(p3, i) && 1L;

  // Fifth iteration
  p3 = 2;
  j.h ^= fn1(p3, i) && 1L;

  // Sixth iteration
  p3 = 1;
  j.h ^= fn1(p3, i) && 1L;

  // Seventh iteration
  p3 = 0;
  j.h ^= fn1(p3, i) && 1L;

  return 0;
}
