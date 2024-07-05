typedef long d;

typedef unsigned e;

e fn1() { return 5; }

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
unsigned t;
int u;
unsigned v;

d fn4() {
  struct m ad = {1957};
  ad.o = 5;
  signed ae;
  int af = t;
  ae = 5;
  r = af % (~s / ae);
}

int main() { fn4(); }
