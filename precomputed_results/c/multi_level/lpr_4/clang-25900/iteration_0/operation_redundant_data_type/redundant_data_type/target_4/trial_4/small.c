#include <stdio.h>

int fn1(unsigned p1, int p2) { return p2; }

int r;
static int s = -5L;
unsigned t;
int u;
unsigned v;

typedef struct {
  unsigned int n : 18;
  unsigned int o : 1;
} m_t;

int fn4() {
  m_t p2 = {1957, 0};
  p2.o = fn1(v, 5);
  r = t % (~s / p2.o);
}

int main() {
  fn4();
}