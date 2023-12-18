char fn1(unsigned p1, struct i p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

int m[4];
int n[2];

int fn2(int p1, int p2, unsigned p3, short p4) {
  int v = 0x15L;
  int w;
  int a;
  if (p4 ^ v)
    ;
  else
    v = 0x15L;
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
}

int main() {}
