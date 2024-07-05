typedef short b;

typedef int c;

typedef unsigned char d;

typedef unsigned e;

d fn1(d p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

struct i {
  int j;
  int k;
  c l;
};

e m[4];

struct i n[2];

struct i fn2(c, struct i, e, b);

d fn3(p1) {
  d q[7][7];
  struct i r;
  e s;
  if (fn2(p1, r, s, q[0][0]), p1)
    ;
  return p1;
}

struct i fn2(c p1, struct i p2, e p3, b p4) {
  struct i v = {0x15L, -5L};
  c a;
  if (p4 ^ v.k)
    ;
  else
    v = n[1];

  // Unrolled loop
  // Loop unrolled 4 times, as m is of size 4
  n[0] = v;
  v.l = m[p2.j];
  struct i b;
  if (!n[0].j)
    ;
  else {
    fn1(n[0].l, 2) && p2.k;
    n[0] = b;

    n[0] = v;
    v.l = m[p2.j];
    if (!n[0].j)
      ;
    else {
      fn1(n[0].l, 2) && p2.k;
      n[0] = b;

      n[0] = v;
      v.l = m[p2.j];
      if (!n[0].j)
        ;
      else {
        fn1(n[0].l, 2) && p2.k;
        n[0] = b;

        n[0] = v;
        v.l = m[p2.j];
        if (!n[0].j)
          ;
        else {
          fn1(n[0].l, 2) && p2.k;
          n[0] = b;
        }
      }
    }
  }

  return p2;
}

int main() {}