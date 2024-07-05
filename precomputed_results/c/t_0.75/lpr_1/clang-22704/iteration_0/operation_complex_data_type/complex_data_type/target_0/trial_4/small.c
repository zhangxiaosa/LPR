#include<stdio.h>

struct c {
  int d;
  int e;
};

void fn1(struct c* f) {
  int h = 6L;
  if (f->e)
    goto i;
  fn1(f);
  char j;
  return;
i:
  f->d = h;
  fn1(f);
  j = 0xEEACFBBFL;
  return;
}

int main() {
  struct c f;
  fn1(&f);
  return 0;
}