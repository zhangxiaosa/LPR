typedef long c;

typedef unsigned d;
typedef unsigned e;

typedef unsigned f;
typedef unsigned g;

struct h {
  signed i;
  c j;
  unsigned k;
};

static void fn1(f, short, g, d);
e fn2(p1) {
  struct h p;
  fn1(0, 0, p1, 3);
  for (;;) {}
}

static void fn1(f p1, short p2, g p3, d p4) {
  p4;
w:
  goto w;
}

int main() {}
