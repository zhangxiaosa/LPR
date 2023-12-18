typedef unsigned char unsigned_char;

unsigned_char fn1(unsigned_char p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

struct i {
  int j;
  int k;
  int l;
};

unsigned m[4];

struct i n[2];

struct i fn2(int p1, struct i p2, unsigned p3, short p4) {
  struct i v = {0x15L, -5L};
  int w;
  int a;
  if (p4 ^ v.l)
    ;
  else
    v = n[1];
  for (; w; ++w)
    for (p3 = 0; p3 <= 39; ++p3)
      for (p2.j = 0; p2.j <= 2; ++p2.j) {
        n[0] = v;
        v.l = (unsigned) m[p2.j];
        if (!n[0].k)
          ;
        else {
          w = fn1(n[0].l, 2) && p2.k;
          for (; a; a += 4)
            n[0] = v;
        }
      }
  return p2;
}

unsigned_char fn3(unsigned_char p1) {
  unsigned_char q[7][7];
  struct i r = {0};
  unsigned s = 0;
  if (fn2(p1, r, s, q[0][0]), p1)
    ;
  return p1;
}

int main() {}
