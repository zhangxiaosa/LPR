#include <stdio.h>

char fn1(char p1, char p2) { return p1 * p2; }

int i;
signed j_h;
int *fn2(unsigned p1, char p3) {
  return NULL; // Replaced p2 with NULL since it's optimized out.
}

int main() { return 0; }
