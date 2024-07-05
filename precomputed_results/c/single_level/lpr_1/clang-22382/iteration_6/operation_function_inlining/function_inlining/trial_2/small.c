#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

unsigned fn2(p1) {
  struct h p;
  int q;
  // fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  unsigned p1 = 0;
  struct h p;
  int q;
  // fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}
