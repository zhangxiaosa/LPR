typedef char a;
typedef int b;
typedef unsigned c;

struct g {
  signed h;
};

b i;
struct g j;

int main() { 
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

  return 0;
}