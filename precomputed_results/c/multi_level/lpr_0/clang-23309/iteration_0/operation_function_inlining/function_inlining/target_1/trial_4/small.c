typedef short a;

typedef int b;

typedef long c;

typedef unsigned char d;

typedef short e;

typedef unsigned f;

typedef unsigned g;

b fn2(b p1, b p2) { return p1 - p2; }

c fn3(c p1, c p2) { return p1 - p2; }

d fn4(d p1, d p2) { return p1; }

f fn5(f p1, f p2) { return p2; }

f fn6(f p1, f p2) { return p1 - p2; }

f p;

void fn7(p1) { p = p1; }

void fn8(p1) { fn7(p1); }

void fn9(g p1, char *p2, int p3) { fn8(p1); }

b t;

f u;

c v;

a w;

f ab;

a ac = 1L;

d fn11(d, f, b, e);
a fn12(b, b, d, a, g);
b fn13() {
  e ae = 1UL;

  // Inline fn10
  {
    b af = 0x2F2F6D26L;
    d ag = 248UL;
    fn11(2L, ag, t, 1);
    ae = af;
  }

  return ae;
}

void fn11(d p1, f p2, b p3, e p4);

int main() {
  int ap = 0;

  // Inline fn10
  {
    b af = 0x2F2F6D26L;
    d ag = 248UL;
    fn11(2L, ag, t, 1);
  }

  fn9(v, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}
