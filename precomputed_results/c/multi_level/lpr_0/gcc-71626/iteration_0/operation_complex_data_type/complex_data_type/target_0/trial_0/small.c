#include <stdio.h>

void fn1() {}

typedef long d __attribute__((__vector_size__(sizeof(long))));

int main() {
  long c_fn2 = (long)fn1;
  long c = c_fn2;
  d f = {c};

  return 0;
}