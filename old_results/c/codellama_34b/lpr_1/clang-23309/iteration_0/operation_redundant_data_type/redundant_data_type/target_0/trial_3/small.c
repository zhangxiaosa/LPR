
typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

void fn1(f p1, int p2) { printf("checksum = %X\n", p1); }

b fn2(b p1, b p2) { return p1 - p2; }

c fn3(c p1, c p2) { return p1 - p2; }

d fn4(d p1, d p2) { return p1; }

f fn5(f p1, f p2) { return p2; }

f fn6(f p1, f p2) { return p1 - p2; }

f p;

void fn9(g p1, char *p2, int p3) { p = p1; }

b t;

f u;

c v;

a w;

f ab;

a ac = 1L;

d fn10(g, e);

d fn11(d, f, b, e);

a fn12(b, b, d, a, g);

b fn13() {
  e ae = 1UL;
  fn10(u, t);
  return ae;
}

int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}
