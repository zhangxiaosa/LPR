#include <stdio.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

void fn1() {}

d fn2() {
  d f = {
    /* fn1 body */
  };
  return f;
}