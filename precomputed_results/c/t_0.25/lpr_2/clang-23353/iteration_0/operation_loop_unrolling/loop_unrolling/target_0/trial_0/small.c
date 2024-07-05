typedef char a;
typedef int b;
typedef unsigned c;
a fn1(a p1, a p2) { return p1 * p2; }
struct g {
  signed h;
};
b i;
struct g j;
b *fn2(c p1, b *p2, a p3) {
  // Unrolled loop iteration 1
  j.h ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled loop iteration 2
  j.h ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled loop iteration 3
  j.h ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled loop iteration 4
  j.h ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled loop iteration 5
  j.h ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled loop iteration 6
  j.h ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled loop iteration 7
  j.h ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled loop iteration 8
  j.h ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled loop iteration 9
  j.h ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled loop iteration 10
  j.h ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled loop iteration 11
  j.h ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled loop iteration 12
  j.h ^= fn1(p3, i) && 1L;
  p3--;

  // Unrolled loop iteration 13
  j.h ^= fn1(p3, i) && 1L;
  p3--;

  return p2;
}

int main() { return 0; }
