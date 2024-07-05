
#include <stdio.h>

typedef long a;

a fn1() {}

typedef a d;

d fn2() {
  a c = fn1;
  d f = {c};
  return f;
}

int main() {
  a c = fn1;
  d f = {c};
  return 0;
}
