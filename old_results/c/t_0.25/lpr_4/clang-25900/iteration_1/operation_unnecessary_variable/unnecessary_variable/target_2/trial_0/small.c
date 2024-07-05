typedef int c;

typedef long d;

typedef unsigned e;

typedef unsigned g;

e fn1(p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

c r;

static signed s = -5L;

g t;

d fn4() {
  struct m ad = {1957};
  ad.o = fn1(5);
  ad.o = 0;
  r = t % (~s / ad.o);
  ad.o;
}

int main() { fn4(); }
