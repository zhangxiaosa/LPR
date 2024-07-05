
#include <stdio.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  d f = {1, 2, 3, 4, 5, 6, 7, 8};
  return f;
}

int main() {
  d result = fn2();
  for (int i = 0; i < sizeof(d) / sizeof(long); i++) {
    printf("%ld ", result[i]);
  }
  printf("\n");
  return 0;
}
