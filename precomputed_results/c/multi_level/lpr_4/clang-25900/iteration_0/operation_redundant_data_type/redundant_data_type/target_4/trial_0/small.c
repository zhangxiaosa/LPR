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
  ae = u;
  r = af % (~s / ae);
  ae;
}

int main() { fn4(); }
}