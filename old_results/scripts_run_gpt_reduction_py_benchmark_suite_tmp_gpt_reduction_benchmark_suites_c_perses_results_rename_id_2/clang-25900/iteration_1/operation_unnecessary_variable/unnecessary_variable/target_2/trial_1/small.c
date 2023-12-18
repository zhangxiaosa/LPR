#include <stdio.h>

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
unsigned t;
int u;
unsigned v;

void fn4() {
  struct m ad = {1957};
  ad.o = 5;
  r = 0;
}

int main() {
  fn4();
  return 0;
}