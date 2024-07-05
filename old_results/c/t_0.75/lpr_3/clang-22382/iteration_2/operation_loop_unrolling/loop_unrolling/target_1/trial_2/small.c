#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  // Unrolled loop with a factor of 4
  struct h r;

  p = r = p;
  p = r = p;
  p = r = p;
  p = r = p;

  // Main program code
  return 0;
}

int main() {
  fn2();
  return 0;
}