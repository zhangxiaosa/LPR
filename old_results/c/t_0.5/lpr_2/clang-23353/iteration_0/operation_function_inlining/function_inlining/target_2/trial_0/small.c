typedef char a;
typedef int b;
typedef unsigned c;

a fn1(a p1, a p2) {
  return p1 * p2;
}

int main() {
  struct g {
    signed h;
  };

  struct g j;

  for (a p3 = 6; p3 >= -7; p3 -= 1) {
    j.h ^= fn1(p3, 0) && 1L;
  }

  return 0;
}