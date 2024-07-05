
#include <stdio.h>

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;
int u;

int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  int ae;
  int af = u;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  return ad.o;
}

int main() { fn4_inlined(5); }

<SYS>

Optimization:

The variable "ad.o" is assigned the value of "p1" in the function "fn4_inlined". Since "p1" is a constant value of 5, we can replace all instances of "ad.o" with 5 and optimize out the variable.

The optimized code would look like this:
