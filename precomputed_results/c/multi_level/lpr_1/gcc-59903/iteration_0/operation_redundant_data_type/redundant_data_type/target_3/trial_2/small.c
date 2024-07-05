typedef signed a;
typedef int c;
typedef unsigned char d;
typedef unsigned;

d fn1(d p1, int p2) {
  return p1 ? p1 : p2;
}

struct i {
  a j;
  c l;
};

unsigned m[4];
struct i_unsigned n[2];

unsigned char fn3(p1) {
  struct i r;
  unsigned s;
  struct i v = {0x15L};
  c w;
  c a;
  
  for (; w; w += 1)
    for (s = 0; s <= 39; ++s)
      for (r.j = 0; r.j <= 2; r.j += 1) {
        n[0] = v;
        v.l = m[r.j];
        struct i b;
        w = fn1(n[0].l, 2);
        for (; a; a -= 4)
          n[0] = b;
      }
  
  return p1;
}

int main() {}
