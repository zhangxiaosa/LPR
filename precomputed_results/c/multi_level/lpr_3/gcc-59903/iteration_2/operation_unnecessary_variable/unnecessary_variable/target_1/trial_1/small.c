#include <iostream>

char fn1(unsigned p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

struct i {
  int j;
  int k;
  int l;
};

unsigned m[4];
struct i n[2];

struct i fn2(int p1, struct i p2, unsigned p3, short p4) {
  int v_j = p4 ^ -5L ? n[1].j : 0x15L;
  int v_l;
  int w;

  if (v_j)
    v_l = m[p2.j];

  return p2;
}

unsigned fn3(int p1) {
  struct i r;

  if (fn2(p1, r, p1, 0), p1)
    ;

  return p1;
}

int main() {
  return 0;
}