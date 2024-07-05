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

struct i fn2(int p1, struct i p2, unsigned p3, short p4, int v_j, int w, int a, int n_0_j, int n_0_k, int n_0_l, int p2_j) {
  if (!n_0_j)
    ;
  else {
    w = fn1(n_0_l, 2) && n_0_k;
    for (; a; a += 4)
      n_0_j = v_j;
    n_0_l = m[p2_j];
  }

  return p2;
}

unsigned fn3(unsigned p1) {
  unsigned char q[7][7];
  struct i r;

  if (fn2(p1, r, 0, q[0][0], v_j, w, a, n_0_j, n_0_k, n_0_l, p2_j))
    ;

  return p1;
}

int main() {}