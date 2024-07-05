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

struct i fn2(c, struct i, e, b);

d fn3(p1) {
  d q[7][7];
  struct i r;
  e s;
  if (fn2(p1, r, s, q[0][0]), p1)
    ;
  return p1;
}

struct i fn2(c p1, struct i p2, e p3,
                   b p4) {
  struct i v = {0x15L, -5L};
  c w;
  c a;
  if (p4 ^ v.k)
    ;
  else
    v = n[1];

  p3 = 0;
  // Loop iteration 1
  // Loop body with p3 = 0

  p3 = 1;
  // Loop iteration 2
  // Loop body with p3 = 1

  p3 = 2;
  // Loop iteration 3
  // Loop body with p3 = 2

  p3 = 3;
  // Loop iteration 4
  // Loop body with p3 = 3

  return p2;
}

int main() {}