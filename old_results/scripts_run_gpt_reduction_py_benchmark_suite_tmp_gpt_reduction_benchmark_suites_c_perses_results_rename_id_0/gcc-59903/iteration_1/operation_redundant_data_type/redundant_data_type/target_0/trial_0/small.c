typedef unsigned char unsigned_char;

unsigned_char fn1(unsigned_char p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

struct i {
  int j;
  int k;
  int l;
};

unsigned char m[4];
struct i n[2] = {{0, 0, 0}, {0, 0, 0}};

struct i fn2(int, struct i, unsigned int, short);

unsigned_char fn3(unsigned_char p1) {
  unsigned_char q[7][7];
  struct i r;
  unsigned int s;
  if (fn2(p1, r, s, q[0][0]), p1)
    ;
  return p1;
}

struct i fn2(int p1, struct i p2, unsigned int p3, short p4) {
  struct i v = {0x15, -5, 0};
  int w;
  if (p4 ^ v.k)
    ;
  else
    memcpy(&v, &n[1], sizeof(struct i));
  for (; w; w += 1) {
    for (p3 = 0; p3 <= 39; ++p3) {
      for (p2.j = 0; p2.j <= 2; p2.j += 1) {
        n[0] = v;
        v.l = (unsigned char)m[p2.j];
        if (!n[0].j)
          ;
        else {
          w = fn1(n[0].l, 2) && p2.k;
        }
        n[0] = v;
      }
    }
  }
  return p2;
}

int main() {
  return 0;
}