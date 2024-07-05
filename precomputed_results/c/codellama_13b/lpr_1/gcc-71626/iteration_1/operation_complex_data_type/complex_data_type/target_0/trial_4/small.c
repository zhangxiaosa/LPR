
#include <stdio.h>

typedef long a;
typedef a __attribute__((__vector_size__(sizeof(long)))) d;

/* Decomposition of variable d into variables with primary data type */

typedef long d_elem;
typedef d_elem* d_ptr;

d_elem* a_ptr;
a_ptr = (d_elem*)malloc(sizeof(d_elem) * sizeof(long));

d_ptr d_ptr;
d_ptr = (d_ptr)malloc(sizeof(d_ptr) * sizeof(long));

d d_var;
d_var = {a_ptr};

d_ptr = (d_ptr)malloc(sizeof(d_ptr) * sizeof(long));

d_var = *d_ptr;

/* Functions that use the decomposed variables */

d fn2() {
  d f;
  f = {a_ptr};
  return f;
}

int main() {
  d d_var;
  d_var = fn2();
  return 0;
}
