#include <stdio.h>

struct H {
  short i;
  long j;
  unsigned k;
};

unsigned fn2() {
  struct H p;

  // Inlined fn1 function
  p.k;

  // Removed infinite loop
  struct H r;
  p = r = p;

  // Return statement
  return 0;
}