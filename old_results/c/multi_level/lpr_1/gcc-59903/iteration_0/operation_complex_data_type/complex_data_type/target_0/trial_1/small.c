typedef signed a;

typedef int c;

typedef unsigned char d;

typedef unsigned e;

d fn1(d p1, int p2) { return p1 ? p1 : p2; }

struct i {
  a j;
  c l;
};

c m_0;
c m_1;
c m_2;
c m_3;

struct i n_0;
struct i n_1;

c n_0_l;
c n_1_l;

e fn3(p1) {
  struct i r;
  e s;
  struct i v = {0x15L};
  c w;
  c a;
  for (; w; w += 1)
    for (s = 0; s <= 39; ++s)
      for (r.j = 0; r.j <= 2; r.j += 1) {
        n_0 = v;
        v.l = m_0;
        struct i b;
        w = fn1(n_0.l, 2);
        for (; a; a -= 4)
          n_0 = b;
      }
  return p1;
}

int main() {}
