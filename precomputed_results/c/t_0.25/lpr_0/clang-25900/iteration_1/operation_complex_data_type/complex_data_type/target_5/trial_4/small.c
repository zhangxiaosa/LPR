typedef int c;

typedef long d;

typedef unsigned e;

typedef unsigned g;

e fn1(e p1, int p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

int r;
static signed s = -5L;
unsigned t;
int u;
unsigned v;

d fn4() {
  struct m ad = {1957};
  signed ae;
  ae = ad.o;
  r = t % (~s / ae);
}

int main() { fn4(); }