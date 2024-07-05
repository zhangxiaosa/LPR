typedef unsigned e;

char fn1(unsigned p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

struct i {
  signed j;
  signed k;
  int l;
}

unsigned m0;
unsigned m1;
unsigned m2;
unsigned m3;

struct i n0;
struct i n1;

struct i fn2(int, struct i, unsigned, short);

unsigned fn3(p1) {
  unsigned char q[7][7];
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
    v = n1;
  for (; w; w += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (p2.j = 0; p2.j <= 2; p2.j += 1) {
        n0 = v;
        v.l = m0;
        struct i b;
        if (!n0.j)
          ;
        else {
          w = fn1(n0.l, 2) && p2.k;
          for (; a; a += 1)
            n0 = b;
        }
      }
  return p2;
}

int main() {}