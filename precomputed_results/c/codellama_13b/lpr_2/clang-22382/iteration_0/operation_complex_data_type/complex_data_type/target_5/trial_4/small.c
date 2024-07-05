
#include <stdio.h>

#pragma pack(push, 1)
struct h {
  short i;
  int j;
  short k;
};
#pragma pack(pop)

union h_components {
  struct h h;
  struct {
    short i;
    int j;
    short k;
  };
};

unsigned fn2(unsigned p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  while (1) {
    struct h r;
    p = r = p;
  }
}

int main() {
  struct h p;
  p.i = 1;
  p.j = 2;
  p.k = 3;
  unsigned x = fn2(p);
  printf("x = %u\n", x);
  return 0;
}
