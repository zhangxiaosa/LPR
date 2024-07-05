#include <stdio.h>

typedef short b;
typedef unsigned char unsigned_char;

unsigned_char fn1(unsigned_char p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

struct i {
  signed j;
  signed k;
  int l;
};

unsigned_char m[4];

struct i n[2];

struct i fn2(int, struct i, unsigned, short);
unsigned_char fn3(p1) {
  unsigned_char q[7][7];
  struct i r;
  unsigned s;
  if (fn2(p1, r, s, q[0][0]), p1)
    ;

  return p1;
}

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
        struct i b;
        if (!n[0].j)
          ;
        else {
          w = fn1(n[0].l, 2) && p2.k;
          for (; a; a += 4)
            n[0] = b;
        }
      }

  return p2;
}

int main() {}
