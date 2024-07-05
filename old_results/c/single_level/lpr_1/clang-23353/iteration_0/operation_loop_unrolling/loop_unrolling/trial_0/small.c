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

  p3 = 5;
  j.h ^= fn1(p3, i) && 1L;
  p3--;

  // Unroll the loop for the remaining iterations...

  p3 = -7;
  j.h ^= fn1(p3, i) && 1L;
  p3--;

  return 0;
}