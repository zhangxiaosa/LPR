char fn1(unsigned p1) { return p1 > -5L ? p1 : p1 << -5L; }

struct i {
  int j;
  int k;
  int l;
};

unsigned m[4];
struct i n[2];

struct i fn2(struct i p2, unsigned p3, short p4) {
  struct i v = {0x15L, -5L};
  
  if (p4 ^ v.k)
    ;
  else
    v = n[1];
    
  for (; 0; 0 += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (p2.j = 0; p2.j <= 2; p2.j += 1) {
        n[0] = v;
        v.l = m[p2.j];
        if (!n[0].j)
          ;
        else {
          0 = fn1(n[0].l) && v.k;
          for (; 0; 0 += 1)
            n[0] = v;
        }
      }
  
  return p2;
}

unsigned fn3(unsigned p1) {
  unsigned char q[7][7];
  struct i r;
  unsigned s;
  
  if (fn2(r, s, q[0][0]), p1)
    ;
  
  return p1;
}

int main() {}
