#include <stdio.h>

int fn1(unsigned p1, int p2) { return p2; }

int r;
static char s = -5L;
int t;
int u;
int ae;

int main() {
  struct {
    int n : 18;
  } p2 = {1957};

  p2.n = fn1(5, 5);
  ae = p2.n;
  r = t % (~s / ae);
}