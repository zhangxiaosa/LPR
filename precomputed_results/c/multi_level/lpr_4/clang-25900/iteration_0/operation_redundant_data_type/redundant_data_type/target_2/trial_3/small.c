#include <stdio.h>

int fn1(unsigned p1, int p2) { return p2; }

int r;
static int s = -5L;
unsigned t;
int u;
unsigned v;

int fn4() {
  int ae;
  int af = t;
  ae = fn1(v, 5);
  r = af % (~s / ae);
}

int main() { 
  fn4();
}
