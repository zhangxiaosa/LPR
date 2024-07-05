#include <stddef.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));
d fn2() {
  long c= fn1;
  return {c};  // Replace the use of f with c
}

int main() {}
