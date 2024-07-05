typedef int c;

typedef long d;

typedef unsigned e;

typedef unsigned g;

e fn1(int p2) { return p2; }

struct m {

  signed n : 18;

  signed o : 1;
};

c r;

static signed s = -5L;

g t;

c u;

g v;
d fn4() {

  struct m ad = {1957};

  ad.o = fn1(5);

  signed ae;

  ae = ad.o;

  ad.o = ad.o;

  r = t % (~s / ae);

  ad.o;
}

int main() { fn4(); }
