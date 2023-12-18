#include <stdio.h>

int g;

int fn1() {
  unsigned k;
p:
  k = k >> 1;
  if (g) {
    goto p;
  }
}

int main() {}
