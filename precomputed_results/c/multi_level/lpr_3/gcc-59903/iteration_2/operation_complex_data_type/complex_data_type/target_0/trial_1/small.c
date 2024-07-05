char fn1(unsigned p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

int j;
int k;
int l;

unsigned m0;
unsigned m1;
unsigned m2;
unsigned m3;

int n0_j;
int n0_k;
int n0_l;
int n1_j;
int n1_k;
int n1_l;

struct i {
  int j;
  int k;
  int l;
};

struct i fn2(int p1, struct i p2, unsigned p3, short p4) {
  int v_j = 0x15L;
  int v_l;
  int w;
  int a;
  if (p4 ^ -5L)
    ;
  else
    v_j = n1_j;
  for (; w; w += 3)
    for (p3 = 0; p3 <= 39; ++p3)
      for (p2.j = 0; p2.j <= 2; p2.j += 1) {
        n0_j = v_j;
        n0_l = v_l;
        v_l = m_p2_j;
        if (!n0_j)
          ;
        else {
          w = fn1(n0_l, 2) && p2.k;
          for (; a; a += 1)
            n0 = (struct i){v_j};
        }
      }
  return p2;
}

unsigned fn3(p1) {
  unsigned char q[7][7];
  struct i r;
  if (fn2(p1, r, p1, q[0][0]), p1)
    ;
  return p1;
}

int main() {}
