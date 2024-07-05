typedef int c;

typedef long d;

typedef unsigned e;

unsigned fn1(int p2) { return p2; }

struct m {

  signed n : 18;

  unsigned o : 1;
};

c r;

static signed s = -5L;

c t;

d fn4() {

  struct m p2 = {1957};

  p2.o = fn1(5);

  r = t % (~s / p2.o);
}

int main() { fn4(); }
