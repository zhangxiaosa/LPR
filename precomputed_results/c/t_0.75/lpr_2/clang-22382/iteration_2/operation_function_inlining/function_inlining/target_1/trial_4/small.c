#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned fn2(unsigned p1) {
  struct h p;
  
  // Inlined code from fn1
  p.k;
w:
  goto w;

  // The for loop is removed since it doesn't serve any purpose
}

int main() {
  // Call fn2
  fn2(10);
  
  return 0;
}
