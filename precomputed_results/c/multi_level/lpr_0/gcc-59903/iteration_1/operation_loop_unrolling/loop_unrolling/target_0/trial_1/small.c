typedef unsigned char unsigned_char;
typedef unsigned e;

unsigned_char fn1(unsigned_char p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

struct i {
  int j;
  int k;
  int l;
};

e m[4];
struct i n[2];

struct i fn2(int p1, struct i p2, unsigned p3, short p4) {
  struct i v = {0x15L, -5L};
  int w;
  int a;

  if (p4 ^ v.k) {
    // Loop unrolling - Iteration 1
    n[0] = v;
    v.l = m[p2.j];
    if (!n[0].j) {
      // Loop body
    } else {
      w = fn1(n[0].l, 2) && p2.k;
      // Loop unrolling - Iteration 2
      n[0] = v;
      // Loop unrolling - Iteration 3
      n[0] = v;
      // Loop unrolling - Iteration 4
      n[0] = v;
    }
  } else {
    v = n[1];
  }

  return p2;
}

unsigned_char fn3(p1) {
  unsigned_char q[7][7];
  struct i r;
  unsigned s;

  if (fn2(p1, r, s, q[0][0]), p1) {
    // Loop body
  }

  return p1;
}

int main() {}