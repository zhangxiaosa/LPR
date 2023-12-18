char fn1(unsigned p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

struct i {
  int j;
  int k;
  int l;
};

unsigned m[4];
struct i n[2];

unsigned fn3(p1) {
  unsigned char q[7][7];
  struct i r;

  unsigned p3;
  int v_j = 0x15L;
  int w = 0;
  int a = 0;

  if (p1) {
    int p2_j;
    int p2_k;
    int p2_l;
    p2_j = 0;
    p2_k = 0;
    p2_l = 0;
    for (; w <= 0; w += 1) {
      for (p3 = 0; p3 <= 39; ++p3) {
        for (p2_j = 0; p2_j <= 2; p2_j += 1) {
          r.j = v_j;
          r.k = 5L;
          if (r.j) {
            w = (fn1(r.l, 2) && r.k) != 0;
            for (; a <= 0; a += 4) {
              r.j = v_j;
            }
            r.l = m[p2_j];
          }
        }
      }
    }
  }

  return p1;
}

int main() {}