char fn1(unsigned p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

struct i {
  int j;
  int k;
  int l;
};

unsigned m0;
unsigned m1;
unsigned m2;
unsigned m3;
struct i n0;
struct i n1;

struct i fn2(int p1, struct i p2, unsigned p3, short p4);

unsigned fn3(p1) {
  unsigned char q0_0;
  unsigned char q0_1;
  unsigned char q0_2;
  // ... (repeated for q[0][1] to q[6][6])

  struct i r;
  if (fn2(p1, r, p1, q0_0), p1)
    ;
  return p1;
}

struct i fn2(int p1, struct i p2, unsigned p3, short p4) {
  int v_j = 0x15L;
  int v_l;
  int w;
  int a;
  if (p4 ^ -5L)
    ;
  else
    v_j = n1.j;
  for (; w; w += 3)
    for (p3 = 0; p3 <= 39; ++p3)
      for (p2.j = 0; p2.j <= 2; p2.j += 1) {
        n0.j = v_j;
        n0.l = v_l;
        v_l = m[p2.j];
        struct i b;
        if (!n0.j)
          ;
        else {
          w = fn1(n0.l, 2) && p2.k;
          for (; a; a += 1)
            n0 = b;
        }
      }
  return p2;
}

int main() {}.