
<SYS>

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <complex.h>

// Define a complex data type
typedef long double complex c;

// Define a function to return a complex number
c fn1() {
  c a = {1.0, 2.0};
  return a;
}

// Define a function to return a complex number
c fn2() {
  c a = {3.0, 4.0};
  return a;
}

int main() {
  c f = fn1();
  c g = fn2();
  c h = f + g;
  printf("f = %f + %fi\n", creal(f), cimag(f));
  printf("g = %f + %fi\n", creal(g), cimag(g));
  printf("h = %f + %fi\n", creal(h), cimag(h));
  return 0;
}

</SYS>
