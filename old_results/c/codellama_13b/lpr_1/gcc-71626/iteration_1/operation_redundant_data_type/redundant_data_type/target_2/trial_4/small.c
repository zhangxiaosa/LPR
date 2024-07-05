
#include <stdio.h>

// Eliminate the typedef long a;

long d __attribute__((__vector_size__(sizeof(long))));

void fn1() {}

long d fn2() {
  long d f = {fn1};
  return f;
}

int main() {}
