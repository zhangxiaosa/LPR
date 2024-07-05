char fn1(unsigned p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

int n[2];
unsigned m[4];

int fn2(int p1, int p2, unsigned p3, short p4) {
  int v = 0x15L;
  int w;
  int a;
  if (p4 ^ v)
    ;
  else
    v = n[1];
  for (; w; w += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (p2 = 0; p2 <= 2; p2 += 1) {
        n[0] = v;
        v = m[p2];
        if (!n[0])
          ;
        else {
          w = fn1(n[0], 2) && p2;
          for (; a; a += 1)
            n[0] = v;
        }
      }
  return p2;
}

unsigned fn3(p1) {
  unsigned char q[7][7];
  int r;
  if (fn2(p1, r, 0, q[0][0]), p1)
    ;
  return p1;
}

int main() {}
