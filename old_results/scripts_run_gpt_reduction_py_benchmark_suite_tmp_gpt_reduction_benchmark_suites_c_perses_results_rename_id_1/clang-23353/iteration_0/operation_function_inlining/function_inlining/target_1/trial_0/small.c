typedef char a;
typedef int b;
typedef unsigned c;
a fn1(a p1, a p2) { return p1 * p2; }
struct g {
  signed h;
};
b i;
struct g j;

int main() {
  j.h ^= 6 * i && 1L;
  j.h ^= 5 * i && 1L;
  j.h ^= 4 * i && 1L;
  j.h ^= 3 * i && 1L;
  j.h ^= 2 * i && 1L;
  j.h ^= 1 * i && 1L;
  j.h ^= 0 * i && 1L;
  j.h ^= -1 * i && 1L;
  j.h ^= -2 * i && 1L;
  j.h ^= -3 * i && 1L;
  j.h ^= -4 * i && 1L;
  j.h ^= -5 * i && 1L;
  j.h ^= -6 * i && 1L;
  return 0;
}