#include <stdio.h>

char fn1(unsigned p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

struct i {
  int j;
  int k;
  int l;
};

unsigned m[4];
struct i n[2];

struct i fn2(int p1, struct i p2, unsigned p3, short p4) {
  int v_j = 0x15L;
  int v_l;
  int a;
  if (p4 ^ -5L)
    ;
  else
    v_j = n[1].j;
  for (; a; a += 1)
    n[0] = (struct i){v_j, v_l, 0};
  return p2;
}

unsigned fn3(p1) {
  unsigned char q[7][7];

  // Replacing q[0][0] with the initial value
  struct i r;
  if (fn2(p1, r, p1, q[0][0]), p1)
    ;
  return p1;
}

int main() {}
