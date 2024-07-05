#include <stdio.h>

int r;
static int s = -5L;
unsigned int t;
int u;
unsigned int v;

unsigned int fn1(unsigned int p1, int p2) { return p2; }

int fn4() {
  unsigned int fn1_result = fn1(v, 5);
  int ae;
  int af = t;
  ae = fn1_result;
  r = af % (~s / ae);
}

int main() {
  fn4();
}
