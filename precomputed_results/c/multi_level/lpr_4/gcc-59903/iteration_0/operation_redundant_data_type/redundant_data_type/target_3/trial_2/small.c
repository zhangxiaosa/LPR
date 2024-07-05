unsigned char fn1(unsigned char p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

struct i {
  signed j;
  signed k;
  int l;
};

unsigned m[4];

signed j[2];
signed k[2];
int l[2];

signed fn2(int p1, signed p2_j, signed p2_k, int p3, short p4) {
  signed v_j = 0x15L;
  signed v_k = -5L;
  int w;
  int a;
  if (p4 ^ v_k)
    ;
  else
    v_j = j[1];
  for (; w; w += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (p2_j = 0; p2_j <= 2; p2_j += 1) {
        j[0] = v_j;
        l[p2_j] = m[p2_j];
        signed struct_i_j;
        if (!j[0])
          ;
        else {
          w = fn1(l[p2_j], 2) && p2_k;
          for (; a; a += 1)
            j[0] = struct_i_j;
        }
      }
  return p2_j;
}

unsigned char fn3(unsigned char p1) {
  unsigned char q[7][7];
  signed r_j;
  signed r_k;
  int r_l;
  unsigned s;
  if (fn2(p1, r_j, r_k, r_l, q[0][0]), p1)
    ;
  return p1;
}

int main() {}
