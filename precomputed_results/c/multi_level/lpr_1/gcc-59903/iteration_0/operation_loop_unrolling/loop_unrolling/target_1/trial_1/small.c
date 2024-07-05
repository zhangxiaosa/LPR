typedef signed a;

typedef int c;

typedef unsigned char d;

typedef unsigned e;

d fn1(d p1, int p2) { return p1 ? p1 : p2; }

struct i {
  a j;
  c l;
};

e m[4];

struct i n[2];

d fn3(p1) {
  struct i r;
  e s;
  struct i v = {0x15L};
  c w;
  c a;

  for (s = 0; s <= 39; s += 2)
    for (r.j = 0; r.j <= 2; r.j += 1) {
      n[0] = v;
      v.l = m[r.j];

      w = fn1(n[0].l, 2);

      for (; a >= 8; a -= 4) {
        n[0] = b;
        n[0] = b;
      }

      for (; a; a -= 1)
        n[0] = b;
    }

  return p1;
}

int main() {}
