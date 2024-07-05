#include<stdio.h>

typedef long d[2];

long fn1() {
  // Function fn1 implementation goes here
}




d fn2() {
  long c = fn1();
  d f = {c, c};
  return f;
}

int main() {
  return 0;
}