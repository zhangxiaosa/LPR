typedef signed a;
typedef int c;
typedef unsigned char d;
typedef unsigned e;

d fn1(d p1, int p2) { return p1 ? p1 : p2; }

a n_j[2];
c n_l[2];
e m[4];

unsigned fn3(p1) {
  a r_j;
  c r_l;
  e s;
  a v_j = 0x15L;
  c v_l;
  c w;
  c a;
  for (; w; w += 1)
    for (s = 0; s <= 39; ++s)
      for (r_j = 0; r_j <= 2; r_j += 1) {
        n_j[0] = v_j;
        v_l = m[r_j];
        a b_j;
        c b_l;
        w = fn1(n_l[0], 2);
        for (; a; a -= 4)
          n_j[0] = b_j;
      }
  return p1;
}

int main() {}