unsigned m[4];

struct i {
  int j;
  int k;
  int l;
};

struct i n[2];

char fn1(unsigned p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

struct i fn2(int p1, struct i p2, unsigned p3, short p4) {
  struct i v = {0x15L, -5L...