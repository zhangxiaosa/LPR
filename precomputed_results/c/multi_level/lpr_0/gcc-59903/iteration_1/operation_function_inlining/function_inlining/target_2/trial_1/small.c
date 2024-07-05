#include <stdio.h>

typedef unsigned char unsigned_char;
typedef unsigned e;

unsigned_char fn1(unsigned_char p1, int p2) {
  return (p1 > p2) ? p1 : (p1 << p2);
}

struct i {
  int j;
  int k;
  int l;
};

e m[4];
struct i n[2];

struct i fn2(int p1, struct i p2, unsigned p3, short p4) {
  struct i v = {0x15L, -5L};
  int w;
  int a;

  if (p4 ^ v.k)
    ;
  else
    v = n[1];

  for (; w; w += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (p2.j = 0; p2.j <= 2; p2.j += 1) {
        n[0] = v;
        v.l = m[p2.j];
        if (!n[0].j)
          ;
        else {
          w = (n[0].l > 2) ? n[0].l : n[0].l << 2;
          for (; a; a += 4)
            n[0] = v;
        }
      }

  return p2;
}

struct i fn3(p1) {
  unsigned_char q[7][7];
  struct i r;
  unsigned s;
  struct i v = {0x15L, -5L};
  int w;
  int a;

  if (v.l > 39)
    ;
  else
    v.l = m[v.l];

  for (; w; w += 1)
    for (s = 0; s <= 39; ++s)
      for (r.j = 0; r.j <= 2; r.j += 1) {
        n[0] = v;
        v.l = m[r.j];
        if (!n[0].j)
          ;
        else {
          w = (n[0].l > 2) ? n[0].l : n[0].l << 2;
          for (; a; a += 4)
            n[0] = v;
        }
      }

  if (p1)
    ;

  return p1;
}

int main() {
  // TODO: Add code
  return 0;
}
