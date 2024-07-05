
#include <stdio.h>

int r;
static int s = -5L;
int u;

int fn4_inlined(p1) {
  int ae = 1957;
  int af = u;
  ae = af % (~s / p1);
  return ae;
}

int main() { fn4_inlined(5); }
