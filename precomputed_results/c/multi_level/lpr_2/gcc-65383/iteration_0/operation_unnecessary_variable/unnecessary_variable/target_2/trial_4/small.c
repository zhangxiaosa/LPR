typedef signed a;

typedef int b;

typedef unsigned c;

typedef unsigned d;

b e;
c f;
d g;
b h2 = 0x92A1D2CDL;

a fn1(b m, c n, d o, a p) {
  for (;;) {
    if (h2) {
      return 0xC3L;
    }
    g = 0; // Since r is optimized out, assign 0 directly to g
  }
}

int main() {
  fn1(f, e, e, e);
}