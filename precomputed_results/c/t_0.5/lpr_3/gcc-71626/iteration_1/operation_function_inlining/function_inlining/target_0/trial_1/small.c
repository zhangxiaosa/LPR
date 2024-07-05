#include <stdio.h>

typedef long d __attribute__((__vector_size__(sizeof a)));

d fn2() {
  long c;
  d f;

  // Code from fn1() inlined
  // Start of inlined code
  // ...
  // End of inlined code

  c = /* Code from fn1() */;
  f = {c};
  return f;
}