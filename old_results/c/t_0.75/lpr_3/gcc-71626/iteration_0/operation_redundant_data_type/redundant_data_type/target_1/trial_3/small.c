#include <stdio.h>

long fn1() {}

typedef long d __attribute__((__vector_size__(sizeof(long))));

long fn2() {
  long c = (long)fn1;
  long f = (long)c;
  return f;
}

int main() {}
