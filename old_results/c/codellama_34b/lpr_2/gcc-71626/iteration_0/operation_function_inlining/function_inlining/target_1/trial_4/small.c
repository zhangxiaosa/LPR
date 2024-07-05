
#include <stdint.h>

typedef long a;
a fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(a))));

#ifdef FN2_INLINE
d fn2() {
  a c = fn1;
  d f = {c};
  return f;
}
#else
d fn2() {
  return (d) {fn1()};
}
#endif

int main() {}
