typedef int c;

typedef long d;

typedef unsigned e;

unsigned fn1(unsigned p1, int p2) { return p2; }

struct m {

  signed n : 18;

  signed o : 1;
};

c r;

static signed s = -5L;

c u;

d fn4() {

  struct m p2 = {1957};

  p2.o = 5;

  signed ae;

  ae = 5;

  p2.o = r;

  r = (~s / ae);
}

int main() { fn4(); }
