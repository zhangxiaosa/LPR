
#include <stdio.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  d f = {fn1};
  return f;
}

int main() {
  union {
    d f;
    long values[sizeof(d) / sizeof(long)];
  } u;

  u.f = fn2();

  for (int i = 0; i < sizeof(d) / sizeof(long); i++) {
    printf("%ld ", u.values[i]);
  }

  return 0;
}
