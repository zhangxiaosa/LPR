typedef short b;
typedef int c;
typedef unsigned char d;
typedef unsigned e;

d fn1(d p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

int j;
int k;
c l;

e m[4];
int n_0_j;
int n_0_k;
c n_0_l;
int n_1_j;
int n_1_k;
c n_1_l;

d fn2(c, int, e, b);

d fn3(p1) {
  d q[7][7];
  int r_j;
  int r_k;
  e s;

  if (fn2(p1, r, s, q[0][0]), p1)
    ;

  return p1;
}

d fn2(c p1, int p2_j, e p3, b p4) {
  int v_j = 0x15L;
  int v_k = -5L;
  c v_l;
  c w;
  c a;

  if (p4 ^ v_k)
    ;
  else
    v_j = n_1_j;

  for (; w; w += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (p2_j = 0; p2_j <= 2; p2_j += 1) {
        n_0_j = v_j;
        v_l = m[p2_j];
        int b_j;
        int b_k;
        c b_l;

        if (!n_0_j)
          ;
        else {
          w = fn1(n_0_l, 2) && p2_k;

          for (; a; a += 1)
            n_0_j = b_j;
        }
      }

  return p2_j;
}

int main() {}