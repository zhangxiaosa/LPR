typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
struct i {
  a j;
  a k;
  c l;
};
e m[4];
struct i n[2];
d fn3(p1) {
  struct i r;
  e s;
  struct i v;
  c w;
  c a;

  n[0] = v;
  v.l = m[0];
  struct i b;
  w = n[0].l && r.k;
  n[0] = b;

  n[0] = v;
  v.l = m[1];
  w = n[0].l && r.k;
  n[0] = b;

  n[0] = v;
  v.l = m[2];
  w = n[0].l && r.k;
  n[0] = b;

  n[0] = v;
  v.l = m[3];
  w = n[0].l && r.k;
  n[0] = b;

  return p1;
}

int main() {}