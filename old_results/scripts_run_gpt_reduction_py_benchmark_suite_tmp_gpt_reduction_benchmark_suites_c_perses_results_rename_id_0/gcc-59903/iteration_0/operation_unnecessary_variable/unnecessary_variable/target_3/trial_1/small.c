typedef unsigned char unsigned_char;

  typedef unsigned e;

  unsigned_char fn1(unsigned_char p1, int p2) {
    return p1 > p2 ? p1 : p1 << p2;
  }

  struct i {
    int j;
    int k;
    int l;
  };

  e m[4];

  struct i n[2];

  struct i fn2(int p1, struct i p2, unsigned p3, short p4) {
    int a;
    if (p4 ^ n[1].k)
      ;
    else
      p2 = n[1];
    for (p2.j = 0; p2.j <= 2; p2.j += 1) {
      n[0].l = m[p2.j];
      if (!n[0].j)
        ;
      else {
        fn1(n[0].l, 2) && p2.k;
      }
    }
    return p2;
  }

  unsigned_char fn3(unsigned_char p1) {
    unsigned_char q[7][7];
    struct i r;
    unsigned s;
    if (fn2(p1, r, s, q[0][0]), p1)
      ;
    return p1;
  }

  int main() {}
