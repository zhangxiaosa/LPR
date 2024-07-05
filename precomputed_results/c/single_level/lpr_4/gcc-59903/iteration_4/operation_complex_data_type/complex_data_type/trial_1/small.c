char fn1(unsigned p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

signed j;
signed k;
int l;

unsigned m[4];
struct {
  signed j;
  signed k;
  int l;
} n[2];

struct {
  signed j;
  signed k;
  int l;
} fn2(int p1, struct i p2, unsigned p3, short p4) {
  signed j;
  signed k;
  int l;

  j = 0x15L;
  k = -5L;
  
  int w;
  int a;
  if (p4 ^ k)
    ;
  else
    n[0] = n[1];
  
  for (; w; w += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (j = 0; j <= 2; j += 1) {
        n[0].j = j;
        n[0].l = m[j];
        if (!n[0].j)
          ;
        else {
          w = fn1(n[0].l, 2) && k;
          for (; a; a += 1)
            n[0] = p2;
        }
      }
  
  return p2;
}

unsigned fn3(p1) {
  unsigned char q[7][7];
  signed j;
  signed k;
  int l;

  unsigned s;
  
  if (fn2(p1, r, s, q[0][0]), p1)
    ;
  
  return p1;
}

int main() {
}
