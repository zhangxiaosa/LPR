typedef signed a;

typedef int c;

typedef unsigned char d;

typedef unsigned e;

d fn1(d p1, int p2) { return p1 ? p1 : p2; }

struct i {
  signed int j;
  int l;
};

e m[4];

signed int n_j[2];
int n_l[2];

unsigned fn3(p1) {
  signed int r_j;
  int r_l;
  e s;
  struct i v = {0x15L};
  c w;
  c a;
  for (; w; w += 1)
    for (s = 0; s <= 39; ++s)
      for (r_j = 0; r_j <= 2; r_j += 1) {
        n_j[0] = v;
        v.l = m[r_j];
        struct i b;
        w = fn1(n_l[0], 2);
        for (; a; a -= 4)
          n_l[0] = b;
      }
  return p1;
}

int main() {}.