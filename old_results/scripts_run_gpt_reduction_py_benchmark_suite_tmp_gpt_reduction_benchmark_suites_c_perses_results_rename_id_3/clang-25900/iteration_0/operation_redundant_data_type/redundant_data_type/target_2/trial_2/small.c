typedef unsigned g;

unsigned fn1(unsigned p1, int p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
g t;
int u;
g v;

int main() {
  struct m ad = {1957};
  ad.o = (unsigned)ad.o;
  unsigned ae;
  int af = (unsigned)t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}