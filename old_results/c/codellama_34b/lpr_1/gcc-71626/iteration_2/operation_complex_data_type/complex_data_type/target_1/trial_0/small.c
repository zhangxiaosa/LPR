
#include <stdio.h>
#include <stdint.h>

// Decompose the complex data type into primary data types
typedef long d __attribute__((__vector_size__(sizeof(long))));
d fn2() {
  long f[sizeof(long)];
  for (int i = 0; i < sizeof(long); i++) {
    f[i] = fn1(i);
  }
  return f;
}

int main() {
  d result = fn2();
  for (int i = 0; i < sizeof(long); i++) {
    printf("%ld ", result[i]);
  }
  return 0;
}
