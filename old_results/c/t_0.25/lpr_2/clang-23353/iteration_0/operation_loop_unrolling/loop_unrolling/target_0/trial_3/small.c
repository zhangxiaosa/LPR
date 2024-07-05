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
  j.h ^= fn1(6, i) && 1L;
  j.h ^= fn1(5, i) && 1L;
  j.h ^= fn1(4, i) && 1L;
  j.h ^= fn1(3, i) && 1L;
  j.h ^= fn1(2, i) && 1L;
  j.h ^= fn1(1, i) && 1L;
  j.h ^= fn1(0, i) && 1L;
  j.h ^= fn1(-1, i) && 1L;
  j.h ^= fn1(-2, i) && 1L;
  j.h ^= fn1(-3, i) && 1L;
  j.h ^= fn1(-4, i) && 1L;
  j.h ^= fn1(-5, i) && 1L;
  j.h ^= fn1(-6, i) && 1L;
  j.h ^= fn1(-7, i) && 1L;
  return p2;
}
int main() { return 0; }
