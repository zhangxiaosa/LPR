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
  p3 = 6;
  j.h ^= fn1(6, i) && 1L;
  p3 = 5;
  j.h ^= fn1(5, i) && 1L;
  p3 = 4;
  j.h ^= fn1(4, i) && 1L;
  p3 = 3;
  j.h ^= fn1(3, i) && 1L;
  p3 = 2;
  j.h ^= fn1(2, i) && 1L;
  p3 = 1;
  j.h ^= fn1(1, i) && 1L;
  p3 = 0;
  j.h ^= fn1(0, i) && 1L;
  p3 = -1;
  j.h ^= fn1(-1, i) && 1L;
  p3 = -2;
  j.h ^= fn1(-2, i) && 1L;
  p3 = -3;
  j.h ^= fn1(-3, i) && 1L;
  p3 = -4;
  j.h ^= fn1(-4, i) && 1L;
  p3 = -5;
  j.h ^= fn1(-5, i) && 1L;
  p3 = -6;
  j.h ^= fn1(-6, i) && 1L;
  p3 = -7;
  j.h ^= fn1(-7, i) && 1L;

  return 0;
}