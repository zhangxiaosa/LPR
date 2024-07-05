#include <stdio.h>

typedef long a;
typedef long d;

long fn1() {}

long fn2() {
  long c = fn1;
  long f = c;
  return (d)f;
}

int main() {

  return 0;
}