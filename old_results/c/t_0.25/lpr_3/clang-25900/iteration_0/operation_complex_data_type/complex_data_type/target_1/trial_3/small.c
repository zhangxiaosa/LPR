unsigned fn1(unsigned p1, int p2) { return p2; }

int r;
static signed s = -5L;
unsigned t;
int u;

int main() {
  signed n;
  signed o;

  n = 0;
  o = 0;

  struct m {
    signed n : 18;
    signed o : 1;
  };

  struct m ad;
  ad.n = n;
  ad.o = o;

  ad.o = fn1(t, 5);

  signed ae;
  unsigned af = t;

  ae = ad.o;
  ad.o = u;

  r = af % (~s / ae);

  ad.o;
}