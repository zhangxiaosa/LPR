#include <stdio.h>

struct m {
  signed n : 18;
  signed o : 1;
};

unsigned fn1(int p2) { return p2; }

long fn4() {
  struct m p2 = { .n = 1957 };
  p2.o = fn1(5);
  signed ae;
  ae = p2.o;
  p2.o = r;
  r = t % (~s / ae);
}

int main() {
  fn4();
}