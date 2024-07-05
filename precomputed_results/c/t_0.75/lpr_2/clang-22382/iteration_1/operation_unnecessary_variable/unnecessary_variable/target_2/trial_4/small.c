#include <stdio.h>

struct h {
  int i;
  long j;
};

static struct h fn1() {
  goto w;

w:
  goto w;
}

int main() {
  fn1();
  return 0;
}