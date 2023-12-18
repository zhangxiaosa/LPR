#include <stdio.h>

typedef long d;

void fn1() {}

d fn2() {
  d f = {fn1};
  return f;
}

int main() {}
