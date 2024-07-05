
#include <stdio.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn1() {}

d fn2() {
  d f = {fn1};
  return f;
}

d main() {
  d f = fn2();
  long f_array[sizeof(d)/sizeof(long)];
  for (int i = 0; i < sizeof(d)/sizeof(long); i++) {
    f_array[i] = f[i];
  }
  return f_array;
}
