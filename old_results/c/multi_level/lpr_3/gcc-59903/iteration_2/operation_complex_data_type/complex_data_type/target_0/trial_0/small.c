char fn1(unsigned p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

struct i {
  int j;
  int k;
  int l;
};

unsigned m[4];
int n_j[2];
int n_k[2];
int n_l[2];

struct i fn2(int p1, struct i p2, unsigned p3, short p4) {
  int v_j = 0x15L;
  int v_l;
  int w;
  int a;

  if (p4 ^ -5L)
    ;
  else
    v_j = n_j[1];

  for (; w; w += 3)
    for (p3 = 0; p3 <= 39; ++p3)
      for (p2.j = 0; p2.j <= 2; p2.j += 1) {
        n_j[0] = v_j;
        n_l[0] = v_l;
        v_l = m[p2.j];

        if (!n_j[0])
          ;
        else {
          w = fn1(n_l[0], 2) && p2.k;
          for (; a; a += 1)
            n_j[0] = v_j;
        }
      }

  return p2;
}

unsigned fn3(p1) {
  unsigned char q[7][7];
  struct i r;

  if (fn2(p1, r, p1, q[0][0]))
    ;
  return p1;
}

int main() {}
.