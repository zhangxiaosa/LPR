typedef unsigned g;

unsigned fn1(p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

int r;
static signed s = -5L;

g t;

long fn4() {
  struct m ad = {1957};
  ad.o = fn1(5);
  signed ae;
  ae = ad.o;
  r = (unsigned)t % (~s / ae);
  ad.o;
}

int main() { fn4(); }
