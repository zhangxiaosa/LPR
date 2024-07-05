typedef char a;
typedef int b;

a fn1(a p1, a p2) {
  return p1 * p2;
}

struct g {
  signed h;
};

b i;
struct g j;

int main() {
  a p3;

  // Unrolled loop
  p3 = 6;
  j.h ^= fn1(p3, i) && 1L;
  p3 -= 4;
  j.h ^= fn1(p3, i) && 1L;
  p3 -= 4;
  j.h ^= fn1(p3, i) && 1L;
  p3 -= 4;
  j.h ^= fn1(p3, i) && 1L;
  p3 -= 4;

  // Handle remaining iterations
  j.h ^= fn1(p3 - 1, i) && 1L;
  j.h ^= fn1(p3 - 2, i) && 1L;

  return 0;
}