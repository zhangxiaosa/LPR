char fn1(unsigned p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

int j;
int k;
int l;

unsigned m[4];
int j_0;
int k_0;
int l_0;
int j_1;
int k_1;
int l_1;

char fn2(int p1, int j, int k, int l, unsigned p3, short p4) {
  int v_j = 0x15L;
  int v_k = -5L;
  int w;
  int a;
  if (p4 ^ v_k)
    ;
  else
    j_1 = v_j;
  for (; w; w += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (j = 0; j <= 2; j += 2) {
        j_0 = v_j;
        k_0 = v_k;
        l_0 = m[j];
        if (!j_0)
          ;
        else {
          w = fn1(l_0, 2) && k_0;
          for (; a; a += 1)
            j_0 = j_0;
        }
      }
  return j_1;
}

unsigned fn3(unsigned p1) {
  unsigned char q[7][7];
  int j;
  int k;
  int l;
  unsigned r;
  unsigned s;
  if (fn2(p1, j, k, l, r, q[0][0]), p1)
    ;
  return p1;
}

int main() {}