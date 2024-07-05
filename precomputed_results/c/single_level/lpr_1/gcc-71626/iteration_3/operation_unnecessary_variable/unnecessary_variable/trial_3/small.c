#include <stdio.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

void fn1() {}

d fn2() { return (d){}; }

int main() {
  return 0;
}