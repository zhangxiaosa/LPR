
#include <stdio.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));
d fn2() {
  // Function body of fn1()
  d f = {/* Function body of fn1() */};
  return f;
}

int main() {
  d result = fn2();
  printf("Result: %ld\n", result);
  return 0;
}
