#include <stdio.h>

struct {
  int d;
  int e;
} f;

char fn1() {
  if (f_e)
    goto i;
  fn1();
  return 537164773;

i:
  f_d = 6;
  fn1();
  return 537164773;
}

int main() {
  // Your code here
  return 0;
}