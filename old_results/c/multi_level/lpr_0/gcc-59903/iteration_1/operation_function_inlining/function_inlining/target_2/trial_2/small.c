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

  unsigned_char q[7][7];
  struct i r;
  unsigned s;

  if (fn2(p1, r, s, q[0][0]), p1)
    ;

  struct i p2_inlined = p2;

  struct i v_inlined = {0x15L, -5L};
  int w_inlined;
  int a_inlined;

  if (p4 ^ v_inlined.k)
    ;
  else
    v_inlined = n[1];

  for (; w_inlined; w_inlined += 1) {
    for (p3 = 0; p3 <= 39; ++p3) {
      for (p2_inlined.j = 0; p2_inlined.j <= 2; p2_inlined.j += 1) {
        n[0] = v_inlined;
        v_inlined.l = m[p2_inlined.j];

        if (!n[0].j)
          ;
        else {
          w_inlined = fn1(n[0].l, 2) && p2_inlined.k;

          for (; a_inlined; a_inlined += 4) {
            n[0] = v_inlined;
          }
        }
      }
    }
  }

  return p2_inlined;
}

int main() {}
