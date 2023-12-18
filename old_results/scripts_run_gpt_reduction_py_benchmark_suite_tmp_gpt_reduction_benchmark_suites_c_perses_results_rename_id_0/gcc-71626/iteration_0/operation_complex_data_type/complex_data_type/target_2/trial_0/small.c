#include <iostream>

typedef long d __attribute__((__vector_size__(sizeof(long))));

long fn1() {
  // fn1 implementation goes here...
}

d fn2() {
  long c = fn1();
  long f_0 = c;  // Decomposed variable for the first element of f
  d f = {f_0};   // Modified initialization of f with the decomposed variable
  return f;
}

int main() {
  // main implementation goes here...
}
