
#include <stdio.h>
#include <stdlib.h>

// Decomposition of the program

int i;
int j;

// Function 1
int fn1(int p1, int p2) {
  return p1 * p2;
}

// Function 2
int fn2(int p2, char p3) {
  for (p3 = 6; p3 != -7; p3--) {
    j ^= (fn1(p3, i) && 1L);
  }
  return p2;
}

int main() {
  i = 0;
  j = 0;
  fn2(i, 'a');
  printf("%d\n", i);
  return 0;
}
