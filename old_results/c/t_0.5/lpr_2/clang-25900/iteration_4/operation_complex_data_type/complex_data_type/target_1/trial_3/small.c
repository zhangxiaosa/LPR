#include <stdio.h>

unsigned fn1(unsigned p2) {
  return p2;
}

signed int n;
signed char o;

unsigned r;

static signed int s = -5L;

int main() {
  n = 1957;
  o = fn1(5);

  signed int ae;
  ae = o;

  o = o;

  r = 4 % (~s / ae);

  o;
}
