typedef unsigned char unsigned_char;
typedef unsigned e;

unsigned_char fn1(unsigned_char p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

struct i {
  int j;
  int k;
  int l;
};

e m[4];
struct i n[2];

unsigned_char fn3(unsigned_char p1) {
  unsigned_char q[7][7];
  struct i r;
  unsigned s;
  struct i v = {0x15L, -5L};
  
  int w;
  int a;
  
  if (p1) {
    v.j = 0x15L;
    v.k = -5L;
  
    for (; w; w += 1) {
      for (s = 0; s <= 39; ++s) {
        for (r.j = 0; r.j <= 2; r.j += 1) {
          n[0].j = v.j;
          n[0].k = v.k;
          n[0].l = v.l;
          
          if (n[0].j) {
            w = n[0].l > 2 ? n[0].l : n[0].l << 2;
          }
        }
      }
    }
  }
  
  return p1;
}

int main() {
  // Program entry point
}