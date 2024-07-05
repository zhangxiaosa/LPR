#include <stdio.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

#define VECTOR_SIZE 4 // Assuming a maximum vector size of 4

long d[VECTOR_SIZE];

long* fn2() {
  long c = fn1();
  return &c;
}

int main() {
  return 0;
}
