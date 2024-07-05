char fn1(unsigned p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

signed j;
signed k;
int l;

unsigned m[4];

signed n_j[2];
signed n_k[2];
int n_l[2];

char fn2(int p1, signed p2_j, signed p2_k, int p3, short p4) {
  signed v_j = 0x15L;
  signed v_k = -5L;

  int w;
  int a;

  if (p4 ^ v_k) {
    // Do nothing
  } else {
    n_j[1] = v_j;
    n_k[1] = v_k;
  }

  for (; w; w += 1) {
    for (p3 = 0; p3 <= 39; ++p3) {
      for (p2_j = 0; p2_j <= 2; p2_j += 1) {
        n_j[0] = v_j;
        n_k[0] = v_k;
        n_l[0] = m[p2_j];

        if (!n_j[0]) {
          // Do nothing
        } else {
          w = fn1(n_l[0], 2) && p2_k;
          for (; a; a += 1) {
            n_j[0] = p2_j;
            n_k[0] = p2_k;
          }
        }
      }
    }
  }

  return p2;
}

unsigned fn3(unsigned p1) {
  unsigned char q[7][7];
  signed r_j;
  signed r_k;
  int r_l;
  unsigned s;

  if (fn2(p1, r_j, r_k, s, q[0][0]), p1) {
    // Do nothing
  }

  return p1;
}

int main() {
  return 0;
}