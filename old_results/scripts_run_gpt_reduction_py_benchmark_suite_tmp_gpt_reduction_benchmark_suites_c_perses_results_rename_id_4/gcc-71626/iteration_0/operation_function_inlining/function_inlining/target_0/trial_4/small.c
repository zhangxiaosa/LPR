#include<stdio.h>

void fn1() {}

typedef long a;
a fn2() {
  a c = fn1();
  return c;
}
