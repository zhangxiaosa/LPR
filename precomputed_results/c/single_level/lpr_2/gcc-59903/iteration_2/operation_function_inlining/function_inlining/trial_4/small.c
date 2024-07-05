typedef short b;

typedef int c;

typedef unsigned char d;

typedef unsigned e;

d fn1(d p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

struct i {

  int j;

  int k;

  int l;

};

e m[4];

struct i n[2];

struct i {

  int j;

  int k;

  int l;

};



struct i fn2(c p1, struct i p2, e p3, b p4) {

  struct i v = {0x15L, -5L};

  c w;

  c a;

  if (p4 ^ v.k)

    ;

  else

    v = n[1];

  for (; w; w += 1)

    for (p3 = 0; p3 <= 39; ++p3)

      for (p2.j = 0; p2.j <= 2; p2.j += 2) {

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

  return p2;

}

e fn3(d p1) {

  d q[7][7];

  struct i r;

  e s;

  {

    struct i v = {0x15L, -5L};

    c w;

    c a;

    if (q[0][0] ^ v.k)

      ;

    else

      v = n[1];

    for (; w; w += 1)

      for (s = 0; s <= 39; ++s)

        for (r.j = 0; r.j <= 2; r.j += 2) {

          n[0] = v;

          v.l = m[r.j];

          struct i b;

          if (!n[0].j)

            ;

          else {

            w = fn1(n[0].l, 2) && r.k;

            for (; a; a += 1)

              n[0] = b;

          }

        }

  }

  if (p1)

    ;

  return p1;

}

int main() {

}