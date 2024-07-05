#include <stdio.h>

unsigned t;
int u;
unsigned v;
int r;
static signed s = -5L;

long fn4() {
  unsigned ae = 1957;
  r = t % (~s / ae);
}

int main() {
  fn4();
}