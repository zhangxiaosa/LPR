#include <stdio.h>

int d;
int e;

char fn1() {
  if (e)
    goto i;
  fn1();
  return 0;

i:
  d = 6;
  fn1();
  return 0;
}

int main() {}