#include <stdio.h>

int d;
int e;

char fn1() {
  if (e) {
    d = 6;
    fn1();
    int j = 0xEEACFBBF;
    return j;
  }
  fn1();
  int j;
  return j;
}

int main() {}
