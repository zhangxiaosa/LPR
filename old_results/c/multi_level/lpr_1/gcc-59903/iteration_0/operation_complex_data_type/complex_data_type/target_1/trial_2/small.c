typedef signed int a;
typedef int c;
typedef unsigned char d;
typedef unsigned int e;

d fn1(d p1, int p2) {
  return p1 ? p1 : p2;
}

struct i {
  signed int j;
  int l;
};

e m[4];

struct i n[2];

unsigned int fn3(unsigned int p1) {
  struct i {
    signed int j;
    int l;
  } r;
  unsigned int s;
  struct i {
    signed int j;
    int l;
  } v = {0x15L};
  int w;
  int a;
  for (; w; w += 1) {
    for (s = 0; s <= 39; ++s) {
      for (r.j = 0; r.j <= 2; r.j += 1) {
        n[0] = v;
        v.l = m[r.j];
        struct i {
          signed int j;
          int l;
        } b;
        w = fn1(n[0].l, 2);
        for (; a; a -= 4) {
          n[0] = b;
        }
      }
    }
  }
  return p1;
}

int main() {}