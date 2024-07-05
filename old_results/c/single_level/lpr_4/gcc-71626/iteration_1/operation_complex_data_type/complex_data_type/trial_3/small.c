#include<stdio.h>

void fn1() {}

typedef long d __attribute__((__vector_size__(sizeof(long))));

long* fn2() {
  static long a;
  d f = {&fn1};
  long* fPtr = (long*)&f;
  return fPtr;
}

int main() {
  return 0;
}