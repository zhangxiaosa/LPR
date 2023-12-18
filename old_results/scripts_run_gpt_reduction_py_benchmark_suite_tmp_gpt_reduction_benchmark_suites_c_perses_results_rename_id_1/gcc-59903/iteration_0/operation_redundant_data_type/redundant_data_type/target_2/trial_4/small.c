typedef signed a;
typedef int c;
typedef unsigned char unsigned_char;

unsigned_char fn1(unsigned_char p1, int p2) { return p1 ? p1 : static_cast<unsigned_char>(p2); }

struct i {
  a j;
  c l;
};

unsigned_char m[4];

struct i n[2];

unsigned_char fn3(unsigned_char p1) {
  struct i r;
  unsigned_char s;
  struct i v = {0x15L};
  c w;
  c a;
  for (; w; w += 1)
    for (s = 0; s <= 39; ++s)
      for (r.j = 0; r.j <= 2; r.j += 1) {
        n[0] = v;
        v.l = static_cast<unsigned_char>(m[r.j]);
        struct i b;
        w = fn1(n[0].l, 2);
        for (; a; a -= 4)
          n[0] = static_cast<struct i>(b);
      }
  return p1;
}

int main() {}
