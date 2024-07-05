
#include <stdio.h>

int main() {
  long x = fn1();
  printf("%ld", x);
  return 0;
}

long fn1() {
  long x = 0;
  for (int i = 0; i < 1000; i++) {
    x += i;
  }
  return x;
}

typedef long d __attribute__((__vector_size__(sizeof(long))));
d fn2() {
  return (d){fn1};
}
