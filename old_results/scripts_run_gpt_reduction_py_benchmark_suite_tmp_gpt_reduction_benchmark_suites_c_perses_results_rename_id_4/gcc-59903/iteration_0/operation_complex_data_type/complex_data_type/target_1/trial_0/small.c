char fn1(unsigned p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

unsigned m[4];

int n_j[2];
int n_k[2];
int n_l[2];

int fn2(int p1, int p2_j, int p2_k, unsigned p3, short p4) {
  int v_j = 0x15L;
  int v_k = -5L;
  int w;
  int a;
  if (p4 ^ v_k)
    ;
  else {
    n_j[1] = v_j;
    n_k[1] = v_k;
  }
  for (; w; w += 1) {
    for (p3 = 0; p3 <= 39; ++p3) {
      for (p2_j = 0; p2_j <= 2; p2_j += 1) {
        n_j[0] = v_j;
        n_k[0] = v_k;
        n_l[0] = m[p2_j];
        int struct_i_j;
        int struct_i_k;
        int struct_i_l;
        if (!n_j[0])
          ;
        else {
          w = fn1(n_l[0], 2) && p2_k;
          for (; a; a += 1) {
            n_j[0] = struct_i_j;
            n_k[0] = struct_i_k;
            n_l[0] = struct_i_l;
          }
        }
      }
    }
  }
  return p2_j;
}

unsigned fn3(p1) {
  unsigned char q[7][7];
  int r_j;
  int r_k;
  int r_l;
  unsigned s;
  if (fn2(p1, r_j, r_k, s, q[0][0]), p1)
    ;
  return p1;
}

int main() {}