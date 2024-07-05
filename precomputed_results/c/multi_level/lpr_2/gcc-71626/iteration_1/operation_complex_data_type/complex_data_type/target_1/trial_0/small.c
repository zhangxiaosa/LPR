#include <stdio.h>

typedef long d[2];

void fn2() {
  long c = fn1;
  d f = {c, c};
  return f;
}

int main() {
  return 0;
}