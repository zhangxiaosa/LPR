typedef signed a;
typedef short b;
typedef int c;
typedef unsigned char d;
typedef unsigned e;
d fn1(d p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}
struct i {
  a j;
  a k;
  c l;
};
e m[4];
struct i n[2];
d fn3(p1) {
  d q[7][7];
  struct i r;
  e s;
  struct i v = {0x15L, -5L};
  c w;
  c a;
  if (n[1].k ^ v.k)
    v = n[1];
  for (; w; w += 1)
    for (s = 0; s <= 39; ++s)
      for (r.j = 0; r.j <= 2; r.j += 1) {
        n[0] = v;
        v.l = m[r.j];
        struct i b;
        if (!n[0].j)
          ;
        else {
          w = fn1(n[0].l, 2) && n[0].k;
          for (; a; a += 1)
            n[0] = b;
        }
      }
  return r;
}
int main() {}
