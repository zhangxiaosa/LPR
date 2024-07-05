#include <stdio.h>

long fn1() {}

typedef long d __attribute__((__vector_size__(sizeof(long))));

long* fn2() {
  long c = fn1();
  d f = {c};
  static long decomposed_f[sizeof(f) / sizeof(long)];
  for (int i = 0; i < sizeof(f) / sizeof(long); i++) {
    decomposed_f[i] = f[i];
  }
  return decomposed_f;
}

int main() {
  long* result = fn2();
  printf("Decomposed values of f:\n");
  for (int i = 0; i < sizeof(d) / sizeof(long); i++) {
    printf("%ld\n", result[i]);
  }
  return 0;
}