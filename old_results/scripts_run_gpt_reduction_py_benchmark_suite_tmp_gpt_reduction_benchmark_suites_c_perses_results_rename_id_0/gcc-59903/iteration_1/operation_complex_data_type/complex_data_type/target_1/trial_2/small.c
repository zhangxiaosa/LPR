char fn1(unsigned p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

struct i {
  int j;
  int k;
  int l;
};

unsigned m[4];
struct i n[2];

struct i fn2(int p1, struct i p2, unsigned p3, short p4) {
  struct i v = {0x15L, -5L};
  int w;
  int a;
  if (p4 ^ v.k)
    ;
  else
    v = n[1];
  for (; w; w += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (p2.j = 0; p2.j <= 2; p2.j += 1) {
        n[0] = v;
        v.l = m[p2.j];
        if (!n[0].j)
          ;
        else {
          w = fn1(n[0].l, 2) && p2.k;
          for (; a; a += 4)
            n[0] = v;
        }
      }
  return p2;
}

unsigned fn3(p1) {
  unsigned char q00, q01, q02, q03, q04, q05, q06;
  unsigned char q10, q11, q12, q13, q14, q15, q16;
  unsigned char q20, q21, q22, q23, q24, q25, q26;
  unsigned char q30, q31, q32, q33, q34, q35, q36;
  unsigned char q40, q41, q42, q43, q44, q45, q46;
  unsigned char q50, q51, q52, q53, q54, q55, q56;
  unsigned char q60, q61, q62, q63, q64, q65, q66;
  struct i r;
  unsigned s;
  if (fn2(p1, r, s, q00), p1)
    ;
  return p1;
}

int main() {}
.