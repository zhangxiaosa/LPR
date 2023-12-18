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

struct i fn2(int p1, struct i p2, unsigned p3, short p4) {
  struct i v = {0x15L, -5L};
  int w;
  int a;
  
  if (p4 ^ v.k) {
    // Do nothing
  } else {
    v = n[1];
  }
  
  for (; w; w += 1) {
    for (p3 = 0; p3 <= 39; ++p3) {
      for (p2.j = 0; p2.j <= 2; p2.j += 1) {
        n[0] = v;
        v.l = i[p2.j];
        
        if (!n[0].j) {
          // Do nothing
        } else {
          w = fn1(n[0].l, 2) && p2.k;
          
          for (; a; a += 4) {
            n[0] = v;
          }
        }
      }
    }
  }
  
  return p2;
}

int main() {
  // The main function can remain unchanged
}

// The optimized version of fn3 after inlining
unsigned_char fn3(int p1, struct i r, unsigned s, unsigned_char q[7][7]) {
  struct i v = {0x15L, -5L};
  int w;
  int a;

  if (p1) {
    fn2(p1, r, s, q[0][0]);
  }
  
  return p1;
}