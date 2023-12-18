typedef unsigned char unsigned_char;

typedef unsigned int e;

unsigned_char fn1(unsigned_char p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

struct i {
  signed int j;
  signed int k;
  int l;
};

e m[4];

struct i n[2];

struct i fn2(int, struct i, short);

unsigned_char fn3(unsigned_char p1) {
  unsigned_char q[7][7];
  struct i r;
  unsigned int s;
  if (fn2(p1, r, q[0][0]), p1)
    ;
  return p1;
}

struct i fn2(int p1, struct i p2, short p4) {
  struct i v = {0x15L, -5L};
  int w;
  int a;
  if (p4 ^ v.k)
    ;
  else
    v = n[1];
  for (; w; w += 1)
    for (p2.j = 0; p2.j <= 39; ++p2.j) {
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
