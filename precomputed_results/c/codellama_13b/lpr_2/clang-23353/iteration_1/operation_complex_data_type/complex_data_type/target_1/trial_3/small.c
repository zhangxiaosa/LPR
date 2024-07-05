
#include <stdio.h>

// Function 1: fn1
char fn1(char p1, char p2) {
  return p1 * p2;
}

// Function 2: fn2
int fn2(int p1) {
  int n = 6;
  int i = 0;
  int j = 0;

  while (n != -7) {
    j ^= fn1(n, i) && 1L;
    n--;
  }

  return j;
}

// Main function
int main() {
  return 0;
}
