#include <iostream>

typedef short b;
typedef int c;
typedef unsigned char d;
typedef unsigned e;

using namespace std;

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

struct i fn2(c, struct i, e, b);

d fn3(d p1) {
  d q[7][7];
  struct i r;
  e s;
  if (fn2(p1, r, s, q[0][0]), p1)
    ;
  return p1;
}

struct i fn2(c p1, struct i p2, e p3, b p4) {
  struct i v = {0x15L, -5L};
  c w;
  c a;
  if (p4 ^ v.k)
    ;
  else
    v = n[1];
  for (; w; w += 1) {
    for (int p3_unrolled = 0; p3_unrolled <= 39; p3_unrolled += 4) {
      // Unrolled loop iteration 1
      {
        p3 = p3_unrolled;
        for (p2.j = 0; p2.j <= 2; p2.j += 1) {
          n[0] = v;
          v.l = m[p2.j];
          struct i b;
          if (!n[0].j)
            ;
          else {
            w = fn1(n[0].l, 2) && p2.k;
            for (; a; a += 1)
              n[0] = b;
          }
        }
      }
      // Unrolled loop iteration 2
      {
        p3 = p3_unrolled + 1;
        for (p2.j = 0; p2.j <= 2; p2.j += 1) {
          n[0] = v;
          v.l = m[p2.j];
          struct i b;
          if (!n[0].j)
            ;
          else {
            w = fn1(n[0].l, 2) && p2.k;
            for (; a; a += 1)
              n[0] = b;
          }
        }
      }
      // Unrolled loop iteration 3
      {
        p3 = p3_unrolled + 2;
        for (p2.j = 0; p2.j <= 2; p2.j += 1) {
          n[0] = v;
          v.l = m[p2.j];
          struct i b;
          if (!n[0].j)
            ;
          else {
            w = fn1(n[0].l, 2) && p2.k;
            for (; a; a += 1)
              n[0] = b;
          }
        }
      }
      // Unrolled loop iteration 4
      {
        p3 = p3_unrolled + 3;
        for (p2.j = 0; p2.j <= 2; p2.j += 1) {
          n[0] = v;
          v.l = m[p2.j];
          struct i b;
          if (!n[0].j)
            ;
          else {
            w = fn1(n[0].l, 2) && p2.k;
            for (; a; a += 1)
              n[0] = b;
          }
        }
      }
    }
  }
  return p2;
}

int main() {
  return 0;
}