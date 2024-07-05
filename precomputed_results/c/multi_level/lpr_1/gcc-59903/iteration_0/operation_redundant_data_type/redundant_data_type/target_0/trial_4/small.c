typedef signed int c;
typedef unsigned char d;
typedef unsigned e;

d fn1(d p1, int p2) {
  return p1 ? p1 : p2;
}

struct i {
  signed int j;
  c l;
};

e m[4];
struct i n[2];

d fn3(p1) {
  signed int s;
  e v = {0x15L};
  c w;
  c a;

  for (; w; w += 1) {
    for (s = 0; s <= 39; ++s) {
      for (n[0].j = 0; n[0].j <= 2; n[0].j += 1) {
        n[0] = v;
        v.l = m[n[0].j];
        w = fn1(n[0].l, 2);
        for (; a; a -= 4) {
          n[0] = b;
        }
      }
    }
  }

  return p1;
}

int main() {
  return 0;
}