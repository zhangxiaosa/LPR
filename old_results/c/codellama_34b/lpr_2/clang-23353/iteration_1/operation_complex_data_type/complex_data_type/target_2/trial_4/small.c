
#include <stdio.h>

// Function to replace char with int and bool
int fn1(int p1, bool p2) {
  return (p1 * p2) ? 1 : 0;
}

// Function to replace char with int and bool
int fn2(int p2, bool p3) {
  for (int i = 6; i != -7; i--) {
    p3 ^= fn1(i, p2) && 1L;
  }
  return p2;
}

int main() {
  int i;
  bool j;
  i = 0;
  j = false;
  fn2(i, j);
  printf("%d", i);
  return 0;
}
