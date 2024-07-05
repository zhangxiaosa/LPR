char fn1(unsigned p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

struct i {
  int j;
  int k;
  int l;
};

struct i n[2];

struct i fn2(int p1, struct i p2, unsigned p3, short p4) {
  struct i v = {0x15L, -5L};

  if (p4 ^ v.k) {
    ;
  }
  else {
    v = n[1];
  }

  return p2;
}

unsigned fn3(p1) {
  struct i r;

  if (fn2(p1, r, p1), p1) {
    ;
  }

  return p1;
}

int main() {}
