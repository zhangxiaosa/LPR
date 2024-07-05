#include <stdio.h>

typedef unsigned char d;
typedef unsigned e;



d fn1(d p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

struct i {
  signed j;
  signed k;
  int l;
};

e m[4];
struct i n[2];

struct i fn2(int p1, struct i p2, e p3, short p4) {
  struct i v = {0x15L, -5L};
  int w = 1;
  int a = 1;
  
  if (!(p4 ^ v.k)) {
      v = n[1];
  }
  
  n[0] = v;
  v.l = m[0];
  if (n[0].j) {
      w = fn1(n[0].l, 2) && p2.k;
  }
  
  n[0] = p2;
  
  return p2;
}

d fn3(d p1) {
  d q[7][7];
  struct i r;
  e s;
  
  if (fn2(p1, r, s, q[0][0]), p1);
  
  return p1;
}

int main() {
  return 0;
}
