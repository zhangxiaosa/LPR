
#include <stdio.h>

unsigned fn1(unsigned p1, short p2, unsigned p3, unsigned p4) {
  return p1 + p3;
}

unsigned fn2(unsigned p1) {
  return fn1(p1, 3, p1, 3);
}

int main() {}
