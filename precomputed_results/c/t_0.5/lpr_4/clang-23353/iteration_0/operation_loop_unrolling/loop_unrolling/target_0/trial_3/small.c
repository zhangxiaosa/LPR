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

  // Unrolled loop
  // Iteration 1
  p3 = 6;
  j.h ^= fn1(p3, i) && 1L;

  // Iteration 2
  p3 -= 1;
  j.h ^= fn1(p3, i) && 1L;

  // Iteration 3
  p3 -= 1;
  j.h ^= fn1(p3, i) && 1L;

  // Iteration 4
  p3 -= 1;
  j.h ^= fn1(p3, i) && 1L;

  // Iteration 5
  p3 -= 1;
  j.h ^= fn1(p3, i) && 1L;

  // Iteration 6
  p3 -= 1;
  j.h ^= fn1(p3, i) && 1L;

  // Iteration 7
  p3 -= 1;
  j.h ^= fn1(p3, i) && 1L;

  return 0;
}