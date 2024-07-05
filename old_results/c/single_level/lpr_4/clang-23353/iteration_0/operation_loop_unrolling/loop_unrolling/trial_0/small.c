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
  p3 = 6;
  j.h ^= fn1(p3, i) && 1L;
  p3--;
  j.h ^= fn1(p3, i) && 1L;
  p3--;
  j.h ^= fn1(p3, i) && 1L;
  p3--;
  j.h ^= fn1(p3, i) && 1L;
  p3--;
  j.h ^= fn1(p3, i) && 1L;
  p3--;
  j.h ^= fn1(p3, i) && 1L;
  p3--;
  j.h ^= fn1(p3, i) && 1L;
  p3--;
  j.h ^= fn1(p3, i) && 1L;
  p3--;
  j.h ^= fn1(p3, i) && 1L;
  p3--;
  j.h ^= fn1(p3, i) && 1L;
  return 0;
}