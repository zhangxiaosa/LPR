typedef unsigned char unsigned_char;

typedef unsigned e;

unsigned_char fn1(unsigned_char p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

struct i {
  int j;
  int k;
  int l;
};

e m[4];

struct i n[2];

struct i fn2(int, unsigned, short);

unsigned_char fn3(unsigned_char p1) {
  unsigned_char q[7][7];
  unsigned s;
  if (fn2(p1, s, q[0][0]), p1)
    ;
  return p1;
}

struct i fn2(int p1, unsigned p3, short p4) {
  struct i v = {0x15L, -5L};
  int w;
  int a;
  if (p4 ^ v.k)
    ;
  else
    v = n[1];
  for (; w; w += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (int j = 0; j <= 2; j += 1) {
        n[0] = v;
        v.l = m[j];
        if (!n[0].j)
          ;
        else {
          w = fn1(n[0].l, 2) && n[0].k;
          for (; a; a += 4)
            n[0] = v;
        }
      }
  return n[0];
}

int main() {}