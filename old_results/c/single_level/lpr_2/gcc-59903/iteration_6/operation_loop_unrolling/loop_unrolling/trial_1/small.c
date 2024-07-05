char fn1(unsigned p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

struct i {
  int j;
  int k;
  int l;
};

unsigned m[4];
struct i n[2];

struct i fn2(int p1, struct i p2, unsigned p3, short p4) {
  struct i v = {0x15L, -5L};

  if (p4 ^ v.k)
    ;
  else
    v = n[1];

  for (unsigned int p3_i = 0; p3_i <= 39; p3_i += 1) {
    p2.j = 0;
    n[0] = v;
    v.l = m[p2.j];
    
    if (!n[0].j)
      ;
    else {
      int w = fn1(n[0].l, 2) && p2.k;
      for (unsigned int p2_j_i = 0; p2_j_i <= 2; p2_j_i += 2) {
        n[0] = n[0];
      }
    }
  }

  return p2;
}

unsigned fn3(p1) {
  unsigned char q[7][7];
  struct i r;
  unsigned s;

  if (fn2(p1, r, s, q[0][0]), p1)
    ;

  return p1;
}

int main() {}
