#include <stdio.h>

typedef char a;
typedef int b;
typedef unsigned c;

a fn1(a p1, a p2) {
  return p1 * p2;
}

struct g {
  signed h;
};

b i;
struct g j;

int main() {
  fn1(6, i) && 1L;
  return 0;
}
