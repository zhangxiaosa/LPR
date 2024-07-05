typedef signed a;
typedef int b;
typedef unsigned c;
typedef unsigned d;
b e;
c f;
d g;
static d i = 0x06D7L;
b j;
a fn1(b, c, d, a);
d fn2() {
  fn1((b)f, (c)e, (d)e, (a)e);
  return j;
}
a fn1(b m, c n, d o, a p) {
  for (;;) {
    c q = 0xC3L;
    b r[5][9][5];
    if (0x92A1D2CDL)
      return q;
    g = r[0x06D7L][0x06D7L][0x06D7L];
  }
}
int main() {
  // fn2() is optimized out
  return 0;
}