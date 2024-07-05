
#include <stdio.h>

// Decompose the complex data type into primary data types
typedef unsigned g;
struct m {
  int n : 18;
  int o : 1;
};
int r;
static int s = -5L;
g t;
int u;

// Inline the function `fn4_inlined`
int fn4_inlined(p1) {
  int ae;
  int af = t;
  ae = p1;
  af = u;
  r = af % (~s / ae);
  return ae;
}

int main() {
  fn4_inlined(5);
}
