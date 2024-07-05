typedef int c;

typedef long d;

typedef unsigned e;

typedef unsigned g;

e fn1(e p1, int p2) { return p2; }

struct m {

  signed n : 18;

  // signed o : 1; // Removed
};

c r;

static signed s = -5L;

g t;

c u;

g v;

d fn4() {

  struct m ad = {1957};

  // ad.o = fn1(0, 5); // Removed

  signed ae;

  ae = ad.o;

  ad.o = u;

  r = t % (~s / ae);

  // ad.o; // Removed
}

int main() { fn4(); }
