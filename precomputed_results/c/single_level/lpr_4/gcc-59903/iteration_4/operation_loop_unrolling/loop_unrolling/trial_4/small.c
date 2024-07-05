char fn1(unsigned p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

struct i {
  signed j;
  signed k;
  int l;
};

unsigned m[4];

struct i n[2];

struct i fn2(int p1, struct i p2, unsigned p3, short p4) {
  struct i v = {0x15L, -5L};
  int w;
  int a;
  if (p4 ^ v.k) {
    ;
  } else {
    v = n[1];
  }

  // Unroll outer loop
  // Loop 1
  // w = 0
  // Loop 2
  // p3 = 0
  // Loop 3
  // p2.j = 0
  // Unrolled loop body 1
  n[0] = v;
  v.l = m[0];
  if (!n[0].j) {
    ;
  } else {
    w = fn1(n[0].l, 2) && p2.k;
    // Unrolled inner loop
    // a = 0
    // a = 1
    n[0] = p2;
    // a = 2
    n[0] = p2;
  }

  // Unroll outer loop
  // Loop 1
  // w = 1
  // Loop 2
  // p3 = 0
  // Loop 3
  // p2.j = 1
  // Unrolled loop body 2
  n[0] = v;
  v.l = m[1];
  if (!n[0].j) {
    ;
  } else {
    w = fn1(n[0].l, 2) && p2.k;
    // Unrolled inner loop
    // a = 0
    // a = 1
    n[0] = p2;
    // a = 2
    n[0] = p2;
  }

  // Unroll outer loop
  // Loop 1
  // w = 1
  // Loop 2
  // p3 = 0
  // Loop 3
  // p2.j = 2
  // Unrolled loop body 3
  n[0] = v;
  v.l = m[2];
  if (!n[0].j) {
    ;
  } else {
    w = fn1(n[0].l, 2) && p2.k;
    // Unrolled inner loop
    // a = 0
    // a = 1
    n[0] = p2;
    // a = 2
    n[0] = p2;
  }

  return p2;
}

unsigned fn3(p1) {
  unsigned char q[7][7];
  struct i r;
  unsigned s;
  if (fn2(p1, r, s, q[0][0]), p1) {
    ;
  }
  return p1;
}

int main() {
  // Program entry point
}